_Bool insert(const char* src, const char* str, int index, char* dest, int len)
{
	unsigned int strLenght = strlen(str);
	unsigned int srcLen = strlen(src);

	if (((strLenght + srcLen) > len) || (index > srcLen)) { return 0; }
	char* point = dest;

	strcpy(point, index, src);			
	point += index;

	strcpy(point, strLenght, str);		
	point += strLenght;

	strcpy(point, len, src + index);	


}