#include "blogpost.h"

Blogpost::Blogpost(std::string authorName, std::string title, std::string text, std::string publicationDate) {
    _authorName = authorName;
    _title = title;
    _text = text;
    _publicationDate = publicationDate;
}

Blogpost::~Blogpost() {
    std::cout << "A blogpost is destructed:" << _title << std::endl;
}

std::string Blogpost::getAuthorName (){
    return _authorName;
}

std::string Blogpost::getTitle() {
    return _title;
}

std::string Blogpost::getText(){
    return _text;
}

std::string Blogpost::getPublicationDate() {
    return _publicationDate;
}
