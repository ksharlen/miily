																		/**** Моя документация по libft *****/
--------------------------------------------------------------------------------------|
void				*ft_memset(void	*buf, int value, size_t num);					  |
/*	Заполняет каждый байт области памяти buf значением лежащим в value. Кол-во		*/|
/*	байт которые необходимо заполнить лежит в num.									*/|
--------------------------------------------------------------------------------------|
void				ft_bzero(void *s, size_t n);									  |
/*	Обнуляет область памяти s до n-ого байта										*/|
--------------------------------------------------------------------------------------|
void				*ft_memcpy(void *dest, const void *src, size_t n);				  |
/*	Побайтовая замена из src в dest размером n										*/|
--------------------------------------------------------------------------------------|
void				*ft_memccpy(void *dest, const void *src, int ch, size_t n);		  |
/*	Функция memccpy() копирует содержимое области памяти,                           */|
/*  на которую указывает source, в область памяти, на которую указывает dest.       */|
/*  Операция копирования заканчивается, когда скопи­ровано count байт или           */|
/*  после копирования первого вхождения символа ch.                                 */|
/*  Функция возвращает указатель на конец области dest, если символ ch был найден   */|
/*  или NULL, если ch не входит в source.                                           */|
--------------------------------------------------------------------------------------|
void				*ft_memmove(void *dest, const void *src, size_t n);               |
/*  Переместить блок памяти. Функция копирует num байтов из блока памяти источника, */|
/*  на который ссылается указатель srcptr, в блок памяти назначения, на который     */|
/*  указывает указатель destptr. Копирование происходит через промежуточный буфер,  */|
/*  что, в свою очередь, не позволяет destination и srcptr пересекаться.            */|
--------------------------------------------------------------------------------------|
void				*ft_memchr(const void *s, int c, size_t n);                       |
/*  Функция memchr в num байтах блока памяти, адресуемого указателем memptr,        */|
/*  ищет первое вхождение val (интерпретируется как не подписанный символ),         */|
/*  и возвращает указатель на найденный символ.                                     */|
--------------------------------------------------------------------------------------|
int					ft_memcmp(const void *s1, const void *s2, size_t n);              |
/*  Работает аналогичным образом ft_strncmp только побайтно                         */|
--------------------------------------------------------------------------------------|
size_t				ft_strlen(const char *str);										  |
/* Считает кол-во символов в строке без учета нуль символа						    */|
------------------------------------------------------------------------------------  |
char				*ft_strdup(const char *s);										  |
/*	Выделяет динамическую память размером строки s и копирует туда содержимое		*/|
/*	вместе с нуль символом															*/|
--------------------------------------------------------------------------------------|
char				*ft_strcpy(char *dest, const char *src);						  |
/*	Копирует содержимое строки src в dest пока не закончится размер dest			*/|
--------------------------------------------------------------------------------------|
char				*ft_strncpy(char *dest, const char *src, size_t n);				  |
/*	Копирует содержимое строки src в dest до введенного размера n					*/|
--------------------------------------------------------------------------------------|
char				*ft_strcat(char *dest, const char *src);						  |
/*	Конкатенирует строку src к строке dest											*/|
--------------------------------------------------------------------------------------|
char				*ft_strncat(char *dest, const char *src, size_t n);				  |
/*	Конкатенирует строку src в dest до введенного размера n							*/|
--------------------------------------------------------------------------------------|
size_t				ft_strlcat(char *dst, const char *src, size_t size);			  |
/*	Конкатенирует строку src в dst, где size-размер получаемой строки после			*/|
/*	склеивания																		*/|
--------------------------------------------------------------------------------------|
char				*ft_strchr(const char *s, int c);								  |
/*	Функция ft_strchr выполняет поиск первого вхождения символа с в строку string.	*/|
/*	Возвращает указатель на первое вхождение символа в строке. Завершающий нулевой	*/|
/*	символ считается частью Си-строки. Таким образом, он также может быть найден	*/|
/*	для получения указателя на конец строки											*/|
--------------------------------------------------------------------------------------|
char				*ft_strrchr(const char *s, int c);								  |
/*	Функция ищет последнее вхождение символа c в строку string.						*/|
/*	Возвращает указатель на последнее вхождение символа в строке string.			*/|
/*	Завершающий нулевой символ считается частью строки.								*/|
/*	Таким образом, он также может быть найден для получения							*/|
/*	указателя на конец строки														*/|
--------------------------------------------------------------------------------------|
char				*ft_strstr(const char *haystack, const char *needle);			  |
/*	Функция ищет первое вхождение подстроки needle в строке haystack.				*/|
/*	Возвращает указатель на первое вхождение строки needle   в строку haystack,		*/|
/*	или пустой указатель, если строка needle не является частью строки haystack.	*/|
/*	В данном поиске нуль-символ не  учитывается										*/|
--------------------------------------------------------------------------------------|
char				*ft_strnstr(const char *big, const char *little, size_t len);	  |
/*	Ищет первое вхождение подстроки little в строке big, поиск идет до len символов */|
/*	big строки. Возвращает вхождение строки или ноль, если строка не вошла.			*/|
--------------------------------------------------------------------------------------|
int					ft_strcmp(const char *s1, const char *s2);						  |
/*	Сравнивает лексиграфически две строки. Возвращает значение меньше нуля, если	*/|
/*	вторая строка больше первой, больше нуля если первая больше второй и нуль, если */|
/*	cтроки равны.																	*/|
--------------------------------------------------------------------------------------|
int					ft_strncmp(const char *s1, const char *s, size_t n);			  |
/*	Работает как ft_strcmp, отличие в том что сравнение идет до n-ого символа		*/|
--------------------------------------------------------------------------------------|
int					ft_atoi(const char *nptr);										  |
/*	Функция atoi преобразует строку string в целое значение типа int.				*/|
/*	Анализируя строку string, atoi интерпретирует её содержание, как целое число,	*/|
/*	которое возвращается как int. Функция сначала отбрасывает символы пробелов		*/|
/*	до тех пор, пока не будет найден символ отличный от нуля.						*/|
/*	Затем, начиная с этого символа, функция принимает необязательный начальный знак */|
/*	плюс или минус. После чего, следует  последовательность цифр, которая			*/|
/*	интерпретируется в числовое значение.											*/|
/*	Строка может содержать другие символы после считанного целого числа,			*/|
/*	эти символы игнорируются и никак не влияют на поведение этой функции.			*/|
/*	Если первая последовательность не-пробельных символов в строке string			*/|
/*	не является целым числом, или, если string пустая  или содержит					*/|
/*	только пробельные символы, преобразование не выполняется.						*/|
--------------------------------------------------------------------------------------|
int					ft_isalpha(int c);                                                |
/*  Возвращает ненулевое число, если c принадлежит английскому алфавиту             */|
/*  и 0, если иначе                                                                 */|
--------------------------------------------------------------------------------------|
int					ft_isdigit(int c);                                                |
/*  Возвращает ненулевое число, если с- цифра и 0 если иначе                        */|
--------------------------------------------------------------------------------------|
int					ft_isalnum(int c);                                                |
/*  Возвращает ненулевое число, если с является символом алфавита или               */|
/*  цифрой, в противном случае возвращается ноль.                                   */|
--------------------------------------------------------------------------------------|
int					ft_isascii(int c);                                                |
/*  Возвращает ненулевое число, если с принадлежит таблице ascii и 0 в противном    */|
/*  случае.                                                                         */|
--------------------------------------------------------------------------------------|
int					ft_isprint(int c);                                                |
/*  Возвращает ненулевое число, если с можно вывести на экран и 0 в противном случае*/|
--------------------------------------------------------------------------------------|
int					ft_toupper(int c);                                                |
/*  Если с принадлежит алфавитному символу в нижнем регистре, возвращает тот же     */|
/*  символ в верхнем регистре, иначе ничего не делает.                              */|
--------------------------------------------------------------------------------------|
int					ft_tolower(int c);                                                |
/*  Аналогична toupper, только в возвращает в нижнем регистре символы алфавита      */|
--------------------------------------------------------------------------------------|
void				*ft_memalloc(size_t size);                                        |
/*  Выделяет динамическую память в количестве size байт.                            */|
--------------------------------------------------------------------------------------|
void				ft_memdel(void **ap);                                             |
/*  Освобождает выделенную память на которую указывает указать вне и присваетвает   */|
/*  ему значение NULL                                                               */|
--------------------------------------------------------------------------------------|
char				*ft_strnew(size_t size);                                          |
/*  Выделяет память под строку, размером size + 1 и зануляет ее                     */|
--------------------------------------------------------------------------------------|
void				ft_strdel(char **as);                                             |
/*  Принцип работы такой же как и у ft_memdel                                       */|
--------------------------------------------------------------------------------------|
void				ft_strclr(char *s);                                               |
/*  Заполняет всю строку s нуль символами ('\0')                                    */|
--------------------------------------------------------------------------------------|
void				ft_striter(char *s, void (*f)(char *));                           |
/*  Применяет ф-ию (*f) ко всем символам строки s                                   */|
--------------------------------------------------------------------------------------|
void				ft_striteri(char *s, void (*f)(unsigned int, char *));            |
/*  Применяет ф-ию (*f) ко всем символам строки s, передавая свой индекс            */|
--------------------------------------------------------------------------------------|
char				*ft_strmap(char const *s, char (*f)(char));                       |
/*  Применяет ф-ию к каждому символу и на основе обработки выделяет память под      */|
/*  новую строку и помещяет туда обработанные символы ф-ией                         */|
--------------------------------------------------------------------------------------|
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));        |
/*  Работает как ft_strmap, но передает символы по их индексам                      */|
--------------------------------------------------------------------------------------|
int					ft_strequ(char const *s1, char const *s2);                        |
/*  Лексиграфическое сравнение между s1 и s2. если строки равны, возращает 1 и      */|
/*  0 если иначе                                                                    */|
--------------------------------------------------------------------------------------|
int					ft_strnequ(char const *s1, char const *s2, size_t n);             |
/*  Работает как ft_strequ, только сравнение длится до размера строки n             */|
--------------------------------------------------------------------------------------|
char				*ft_strsub(char const *s, unsigned int start, size_t len);        |
/*  Выделяет память для подстроки из строки s, начала которой start,                */|
/*  выделение идет до len размера.                                                  */|
--------------------------------------------------------------------------------------|
char				*ft_strjoin(char const *s1, char const *s2);                      |
/*  Склеивает две строки путем выделения полного размера двух строк дин памяти.     */|
/*  Возвращает указатель на склеинную строку                                        */|
--------------------------------------------------------------------------------------|
char				*ft_strtrim(char const *s);                                       |
/*  Убирает пробельные символы('\n', '\t', ' ') в начале и конце строки и           */|
/*  выделяет память под результирующюю строку                                       */|
--------------------------------------------------------------------------------------|
char				**ft_strsplit(char const *s, char c);                             |
/*  создает массив укзателей путем выделение под них динамической памяти и          */|
/*  в каждый из указателей кладет по подстроке(для каждой из которой                */|
/*  тоже выделяется динамическая память) из строки s.                               */|
/*  Подстрокой считается строка до раздилительного символа с.                       */|
--------------------------------------------------------------------------------------|
int					ft_pow(int n, int level);                                         |
/*  Ф-ия для возведения числа в степень                                             */|
--------------------------------------------------------------------------------------|
int					ft_revers(int n);                                                 |
/*  Ф-ия для реверса целочисленного числа                                           */|
--------------------------------------------------------------------------------------|
char				*ft_itoa(int n);                                                  |
/*  Преобразует число в строку                                                      */|
--------------------------------------------------------------------------------------|
void				ft_putchar(char c);                                               |
--------------------------------------------------------------------------------------|
void				ft_putstr(char const *s);                                         |
--------------------------------------------------------------------------------------|
void				ft_putnbr(int n);                                                 |
/*  Выводит на экран число n преобразованное в строку                               */|
--------------------------------------------------------------------------------------|
void				ft_putendl(char const *s);                                        |
/*  Выводит строку заканчивающююся на символ переноса строки                        */|
--------------------------------------------------------------------------------------|
void				ft_putchar_fd(char c, int fd);                                    |
--------------------------------------------------------------------------------------|
void				ft_putstr_fd(char const *s, int fd);                              |
--------------------------------------------------------------------------------------|
void				ft_putendl_fd(char const *s, int fd);                             |
--------------------------------------------------------------------------------------|
void				ft_putnbr_fd(int n, int fd);                                      |
--------------------------------------------------------------------------------------|
t_list				*ft_lstnew(void const *content, size_t content_size);             |
/*  Создает новый элемент списка                                                    */|
--------------------------------------------------------------------------------------|
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));         |
/*  Принимает элемент списка alst и освобождает память content и самого элемента.   */|
/*  Присваивает alst значение NULL.                                                 */|
--------------------------------------------------------------------------------------|
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));            |
/*  Очищает весь список путем освобождения памяти каждого элемента списка и         */|
/*  их значений                                                                     */|
--------------------------------------------------------------------------------------|
void				ft_lstadd(t_list **alst, t_list *new);                            |
/*  Добавляет новый элемент в список(Если список не пустой) в его начало            */|
--------------------------------------------------------------------------------------|
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));                 |
/*  Применяет к каждому элементу списка функцию (*f).                               */|
--------------------------------------------------------------------------------------|
void				ft_lstadd_end(t_list **begin_list, t_list *elem);                 |
/*  Добавляет новый элемент в список (если список не пустой) в его конец            */|
--------------------------------------------------------------------------------------|
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));              |
/*  Применяет ф-ию (*f) к каждому элементу списка и возвращает новый сформированный */|
/*  список в который помещает каждый модефицированный элемент                       */|
--------------------------------------------------------------------------------------|
int					ft_isspace(int c);                                                |
/*  Если n является пробельным символом, то ф-ия возвращает 1 иначе 0               */|
--------------------------------------------------------------------------------------|
