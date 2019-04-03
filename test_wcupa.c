#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    printf(1, "System calls: ", readc());
    printf(1, "West Chester University as founded in %d\n", wcupa());
    exit();
}
