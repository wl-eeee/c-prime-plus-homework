#include "head.h"

typedef struct three {
	char first[20];
	char middle[20];
	char last[20];
}name;


typedef struct {
	int id;
	struct three best;
}all;


int main()
{
	all pada = { 414234,{"dr3w","e","c" } };

	printf("%s , %s.%s --%d", pada.best.first, pada.best.middle, pada.best.last, pada.id);

	return 0;

}
