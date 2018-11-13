#include <iostream>

#include "blogpost.h"

int main() {

    Blogpost blogpost("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet.", "2000.05.04." );
    Blogpost blogpost2("Tim Urban", "Wait bur why", "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10.");
    Blogpost blogpost3("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.", "2017.03.28.");





    std::cout << blogpost.getPublicationDate() << " " << blogpost.getAuthorName() << " " << blogpost.getTitle() << " " << blogpost.getText() << std::endl << std::endl;
    std::cout << blogpost2.getPublicationDate() << " " << blogpost2.getAuthorName() << " " << blogpost2.getTitle() << " " << blogpost2.getText() << std::endl << std::endl;
    std::cout << blogpost3.getPublicationDate() << " " << blogpost3.getAuthorName() << " " << blogpost3.getTitle() << " " << blogpost3.getText() << std::endl << std::endl;


    return 0;
}