#include <stdio.h>

int main()
{
    int kb, mb, gb;
    printf("Enter size in bytes: ");
    scanf("%d", &bytes);
    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;
    printf("\nConversions:\n");
    printf("Kilobytes (KB): %.2f\n", kb);
    printf("Megabytes (MB): %.2f\n", mb);
    printf("Gigabytes (GB): %.2f\n", gb);

    return 0;
}
