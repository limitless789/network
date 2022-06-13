#include "byte_stream.hh"

// Dummy implementation of a flow-controlled in-memory byte stream.

// For Lab 0, please replace with a real implementation that passes the
// automated checks run by `make check_lab0`.

// You will need to add private members to the class declaration in `byte_stream.hh`

using namespace std;

ByteStream::ByteStream(const size_t capacity) : cap(capacity), ava(capacity) {}

size_t ByteStream::write(const string &data) {
    size_t writtenbyte = 0;
    if (data.size() >= this->ava) {
        string add = data.substr(0, this->ava);
        this->stream_str += add;
        writtenbyte = add.size();
        this->ava = 0;
    } else {
        this->stream_str += data;
        writtenbyte = data.size();
        this->ava -= data.size();
    }
    this->written += writtenbyte;

    return writtenbyte;
}

//! \param[in] len bytes will be copied from the output side of the buffer
string ByteStream::peek_output(const size_t len) const { return this->stream_str.substr(0, len); }

//! \param[in] len bytes will be removed from the output side of the buffer
void ByteStream::pop_output(const size_t len) {
    this->stream_str.erase(0, len);
    this->ava += len;
    this->all_read += len;
}

//! Read (i.e., copy and then pop) the next "len" bytes of the stream
//! \param[in] len bytes will be popped and returned
//! \returns a string
string ByteStream::read(const size_t len) {
    string read_stream = this->peek_output(len);
    this->pop_output(len);
    return read_stream;
}

void ByteStream::end_input() { this->end = 1; }

bool ByteStream::input_ended() const { return (this->end) ? true : false; }

size_t ByteStream::buffer_size() const { return this->stream_str.size(); }

bool ByteStream::buffer_empty() const { return this->stream_str.empty(); }

bool ByteStream::eof() const {
    if (this->end == 1 && this->buffer_empty())
        return 1;
    else
        return 0;
}

size_t ByteStream::bytes_written() const { return this->written; }

size_t ByteStream::bytes_read() const { return this->all_read; }

size_t ByteStream::remaining_capacity() const { return this->ava; }
