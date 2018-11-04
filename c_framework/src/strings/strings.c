int getstringlength(char *str) {
	int counter = 0;
	while (str[counter] != 0) {
		counter++;
	}
	return counter;
}

void lowercase(char *str) {
	int i = 0;
	while (str[i] != 0) {
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}
void uppercase(char *str) {
	int i = 0;
	while (str[i] != 0) {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
}
void copystring(char *str1, char *str2) {
	int i = 0;
	while (str2[i] != '\0') {
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
}
void concatenate(char *str1, char *str2) {

	int i = 0;
	while (str1[i] != '\0') {
		i++;
	}
	int j = 0;
	while (str2[j] != '\0') {
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
}
