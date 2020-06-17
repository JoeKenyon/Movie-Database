#ifndef __MOVIEDATABASE_H__
#define __MOVIEDATABASE_H__

#include "Movie.h"

typedef struct MovieNode MovieNode;

struct MovieDatabase
{
    MovieNode* head;
    Movie      movie;
};

#endif