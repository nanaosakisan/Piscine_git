
  1 #include <stdio.h>
  2 #include <string.h>
  3
  4 char    *ft_strstr(char *str, char *to_find)
  5 {
  6         int i;
  7         int j;
  8
  9         i = 0;
 10         j = 0;
 11         if (!to_find)
 12                 return (str);
 13         if (to_find[j] == '\0')
 14                 return (str);
 15         while (str[i])
 16         {
 17                 j = 0;
 18                 if (str[i] == to_find[j])
 19                 {
 20                         while (str[i] == to_find[j] && str[i] && to_find[j])
 21                         {
 22                                 i++;
 23                                 j++;
 24                         }
 25                         if (to_find[j] == '\0')
 26                                 return (str + (i - j));
 27                 }
 28                 i = i - j + 1;
 		}
	  return (0);
  }
