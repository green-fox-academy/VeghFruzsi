
#ifndef INC_02_BLOGPOST_BLOGPOST_H
#define INC_02_BLOGPOST_BLOGPOST_H

#include <iostream>


class Blogpost {
public:
    Blogpost (std::string authorName, std::string title, std::string text, std::string publicationDate);

    ~Blogpost();

    std::string getAuthorName();

    std::string getTitle();

    std::string getText();

    std::string getPublicationDate();

private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;

};


#endif //INC_02_BLOGPOST_BLOGPOST_H
