#include <stdio.h>
#include <stdlib.h>

struct _Birth {
	int year;
	int month;
	int day;
}typedef Birth;

struct _statement {
	char name[20];
	Birth birth;
	char sex[6];
	char phnum[15];
}typedef statement;

int main(void) {
	int n, num;
	statement *pi = NULL;
	printf("몇개의 명세표를 입력하시겠습니까?");
	scanf_s("%d", &num);
	statement **Person= (statement**)malloc(sizeof(statement*)*num);			//구조체크기*n이 아닌 구조체의 포인터크기*n
	pi = (statement*)malloc(sizeof(statement));

	printf("		이름  생년  생월  생일  성별  핸드폰번호\n");
	for (n = 0; n < num; n++) {
		statement *person = (statement*)malloc(sizeof(statement));
		printf("개별 명세표 입력 : ");
		scanf("%s %d %d %d %s %s", person[n].name, &person[n].birth.year, &person[n].birth.month, &person[n].birth.day, person[n].sex, person[n].phnum);
		*pi = person[n];
		Person[n] = pi;
	}

	puts("기본출력 \n이름, 	생년,	생월,	생일,	성별,	핸드폰번호");
	for (n = 0; n < num; n++) {
		printf("%s	", Person[n][0].name);
		printf("%d.	%d.	%d.	", Person[n][0].birth.year, Person[n][0].birth.month, Person[n][0].birth.day);
		printf("%s	", Person[n][0].sex);
		printf("%s	\n", Person[n][0].phnum);
	}


	num -= 1;																				//모든 정렬, 출력과정은 저번과제와 동일
	int a = 20, b = 20, c = 20, d = 20, e = 20, f = 20, g = 20, h = 20, x = 20, y = 20, z = 0;				
	if (z < num) {
		if (strcmp(Person[0][0].name, Person[1][0].name) > 0)
			a = 1, b = 0;
		else
			a = 0, b = 1;
		z++;
	}
	if (z < num) {
		if (strcmp(Person[a][0].name, Person[2][0].name) > 0)
			c = b, b = a, a = 2;
		else {
			if (strcmp(Person[b][0].name, Person[2][0].name) > 0)
				c = b, b = 2;
			else
				c = 2;
		}
		z++;
	}
	if (z < num) {
		if (strcmp(Person[a][0].name, Person[3][0].name) > 0)
			d = c, c = b, b = a, a = 3;
		else {
			if (strcmp(Person[b][0].name, Person[3][0].name) > 0)
				d = c, c = b, b = 3;
			else {
				if (strcmp(Person[c][0].name, Person[3][0].name) > 0)
					d = c, c = 3;
				else
					d = 3;
			}
		}
		z++;
	}
	if (z < num) {
		if (strcmp(Person[a][0].name, Person[4][0].name) > 0)
			e = d, d = c, c = b, b = a, a = 4;
		else {
			if (strcmp(Person[b][0].name, Person[4][0].name) > 0)
				e = d, d = c, c = b, b = 4;
			else {
				if (strcmp(Person[c][0].name, Person[4][0].name) > 0)
					e = d, d = c, c = 4;
				else {
					if (strcmp(Person[d][0].name, Person[4][0].name) > 0)
						e = d, d = 4;
					else
						e = 4;
				}
			}
		}
		z++;
	}
	if (z < num) {
		if (strcmp(Person[a][0].name, Person[5][0].name) > 0)
			f = e, e = d, d = c, c = b, b = a, a = 5;
		else {
			if (strcmp(Person[b][0].name, Person[5][0].name) > 0)
				f = e, e = d, d = c, c = b, b = 5;
			else {
				if (strcmp(Person[c][0].name, Person[5][0].name) > 0)
					f = e, e = d, d = c, c = 5;
				else {
					if (strcmp(Person[d][0].name, Person[5][0].name) > 0)
						f = e, e = d, d = 5;
					else {
						if (strcmp(Person[e][0].name, Person[5][0].name) > 0)
							f = e, e = 5;
						else
							e = 5;
					}
				}
			}
		}
		z++;
	}
	if (z < num) {
		if (strcmp(Person[a][0].name, Person[6][0].name) > 0)
			g = f, f = e, e = d, d = c, c = b, b = a, a = 6;
		else {
			if (strcmp(Person[b][0].name, Person[6][0].name) > 0)
				g = f, f = e, e = d, d = c, c = b, b = 6;
			else {
				if (strcmp(Person[c][0].name, Person[6][0].name) > 0)
					g = f, f = e, e = d, d = c, c = 6;
				else {
					if (strcmp(Person[d][0].name, Person[6][0].name) > 0)
						g = f, f = e, e = d, d = 6;
					else {
						if (strcmp(Person[e][0].name, Person[6][0].name) > 0)
							g = f, f = e, e = 6;
						else {
							if (strcmp(Person[f][0].name, Person[6][0].name) > 0)
								g = f, f = 6;
							else
								g = 6;
						}
					}
				}
			}
		}
		z++;
	}
	if (z < num) {
		if (strcmp(Person[a][0].name, Person[7][0].name) > 0)
			h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 7;
		else {
			if (strcmp(Person[b][0].name, Person[7][0].name) > 0)
				h = g, g = f, f = e, e = d, d = c, c = b, b = 7;
			else {
				if (strcmp(Person[c][0].name, Person[7][0].name) > 0)
					h = g, g = f, f = e, e = d, d = c, c = 7;
				else {
					if (strcmp(Person[d][0].name, Person[7][0].name) > 0)
						h = g, g = f, f = e, e = d, d = 7;
					else {
						if (strcmp(Person[e][0].name, Person[7][0].name) > 0)
							h = g, g = f, f = e, e = 7;
						else {
							if (strcmp(Person[f][0].name, Person[7][0].name) > 0)
								h = g, g = f, f = 7;
							else {
								if (strcmp(Person[g][0].name, Person[7][0].name) > 0)
									h = g, g = 7;
								else
									h = 7;
							}
						}
					}
				}
			}
		}
		z++;
	}
	if (z < num) {
		if (strcmp(Person[a][0].name, Person[8][0].name) > 0)
			x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 8;
		else {
			if (strcmp(Person[b][0].name, Person[8][0].name) > 0)
				x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = 8;
			else {
				if (strcmp(Person[c][0].name, Person[8][0].name) > 0)
					x = h, h = g, g = f, f = e, e = d, d = c, c = 8;
				else {
					if (strcmp(Person[d][0].name, Person[8][0].name) > 0)
						x = h, h = g, g = f, f = e, e = d, d = 8;
					else {
						if (strcmp(Person[e][0].name, Person[8][0].name) > 0)
							x = h, h = g, g = f, f = e, e = 8;
						else {
							if (strcmp(Person[f][0].name, Person[8][0].name) > 0)
								x = h, h = g, g = f, f = 8;
							else {
								if (strcmp(Person[g][0].name, Person[8][0].name) > 0)
									x = h, h = g, g = 8;
								else {
									if (strcmp(Person[h][0].name, Person[8][0].name) > 0)
										x = h, h = 8;
									else
										x = 8;
								}
							}
						}
					}
				}
			}
		}
		z++;
	}
	if (z < num) {
		if (strcmp(Person[a][0].name, Person[9][0].name) > 0)
			y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 9;
		else {
			if (strcmp(Person[b][0].name, Person[9][0].name) > 0)
				y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = 9;
			else {
				if (strcmp(Person[c][0].name, Person[9][0].name) > 0)
					y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = 9;
				else {
					if (strcmp(Person[d][0].name, Person[9][0].name) > 0)
						y = x, x = h, h = g, g = f, f = e, e = d, d = 9;
					else {
						if (strcmp(Person[e][0].name, Person[9][0].name) > 0)
							y = x, x = h, h = g, g = f, f = e, e = 9;
						else {
							if (strcmp(Person[f][0].name, Person[9][0].name) > 0)
								y = x, x = h, h = g, g = f, f = 9;
							else {
								if (strcmp(Person[g][0].name, Person[9][0].name) > 0)
									y = x, x = h, h = g, g = 9;
								else {
									if (strcmp(Person[h][0].name, Person[9][0].name) > 0)
										y = x, x = h, h = 9;
									else {
										if (strcmp(Person[x][0].name, Person[9][0].name) > 0)
											y = x, x = 9;
										else
											y = 9;
									}
								}
							}
						}
					}
				}
			}
		}
		z++;
	}
	z = 0;
	num += 1;
	puts("이름 내림차순 출력\n이름, 	생년,	생월,	생일,	성별,	핸드폰번호");
	if (z < num) {
		z++;
		printf("%s	", Person[a][0].name);
		printf("%d.	%d.	%d.	", Person[a][0].birth.year, Person[a][0].birth.month, Person[a][0].birth.day);
		printf("%s	", Person[a][0].sex);
		printf("%s	\n", Person[a][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[b][0].name);
		printf("%d.	%d.	%d.	", Person[b][0].birth.year, Person[b][0].birth.month, Person[b][0].birth.day);
		printf("%s	", Person[b][0].sex);
		printf("%s	\n", Person[b][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[c][0].name);
		printf("%d.	%d.	%d.	", Person[c][0].birth.year, Person[c][0].birth.month, Person[c][0].birth.day);
		printf("%s	", Person[c][0].sex);
		printf("%s	\n", Person[c][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[d][0].name);
		printf("%d.	%d.	%d.	", Person[d][0].birth.year, Person[d][0].birth.month, Person[d][0].birth.day);
		printf("%s	", Person[d][0].sex);
		printf("%s	\n", Person[d][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[e][0].name);
		printf("%d.	%d.	%d.	", Person[e][0].birth.year, Person[e][0].birth.month, Person[e][0].birth.day);
		printf("%s	", Person[e][0].sex);
		printf("%s	\n", Person[e][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[f][0].name);
		printf("%d.	%d.	%d.	", Person[f][0].birth.year, Person[f][0].birth.month, Person[f][0].birth.day);
		printf("%s	", Person[f][0].sex);
		printf("%s	\n", Person[f][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[g][0].name);
		printf("%d.	%d.	%d.	", Person[g][0].birth.year, Person[g][0].birth.month, Person[g][0].birth.day);
		printf("%s	", Person[g][0].sex);
		printf("%s	\n", Person[g][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[h][0].name);
		printf("%d.	%d.	%d.	", Person[h][0].birth.year, Person[h][0].birth.month, Person[h][0].birth.day);
		printf("%s	", Person[h][0].sex);
		printf("%s	\n", Person[h][0].phnum);
	}
	if (z < num){
		z++;
		printf("%s	", Person[x][0].name);
		printf("%d.	%d.	%d.	", Person[x][0].birth.year, Person[x][0].birth.month, Person[x][0].birth.day);
		printf("%s	", Person[x][0].sex);
		printf("%s	\n", Person[x][0].phnum);
	}
	if (z < num){
		z++;
		printf("%s	", Person[y][0].name);
		printf("%d.	%d.	%d.	", Person[y][0].birth.year, Person[y][0].birth.month, Person[y][0].birth.day);
		printf("%s	", Person[y][0].sex);
		printf("%s	\n", Person[y][0].phnum);
	}

	num -= 1;
	a = 20, b = 20, c = 20, d = 20, e = 20, f = 20, g = 20, h = 20, x = 20, y = 20, z = 0;
	int sum[10];
	if (z < num) {
		sum[0] = 10000 * Person[0][0].birth.year + 100 * Person[0][0].birth.month + Person[0][0].birth.day;
		sum[1] = 10000 * Person[1][0].birth.year + 100 * Person[1][0].birth.month + Person[1][0].birth.day;
		if (sum[0]<sum[1])
			a = 1, b = 0;
		else
			a = 0, b = 1;
		z++;
	}
	if (z < num) {
		sum[2] = 10000 * Person[2][0].birth.year + 100 * Person[2][0].birth.month + Person[2][0].birth.day;
		if (sum[a]<sum[2])
			c = b, b = a, a = 2;
		else {
			if (sum[b]<sum[2])
				c = b, b = 2;
			else
				c = 2;
		}
		z++;
	}
	if (z < num) {
		sum[3] = 10000 * Person[3][0].birth.year + 100 * Person[3][0].birth.month + Person[3][0].birth.day;
		if (sum[a]<sum[3])
			d = c, c = b, b = a, a = 3;
		else {
			if (sum[b]<sum[3])
				d = c, c = b, b = 3;
			else {
				if (sum[c]<sum[3])
					d = c, c = 3;
				else
					d = 3;
			}
		}
		z++;
	}
	if (z < num) {
		sum[4] = 10000 * Person[4][0].birth.year + 100 * Person[4][0].birth.month + Person[4][0].birth.day;
		if (sum[a]<sum[4])
			e = d, d = c, c = b, b = a, a = 4;
		else {
			if (sum[b]<sum[4])
				e = d, d = c, c = b, b = 4;
			else {
				if (sum[c]<sum[4])
					e = d, d = c, c = 4;
				else {
					if (sum[d]<sum[4])
						e = d, d = 4;
					else
						e = 4;
				}
			}
		}
		z++;
	}
	if (z < num) {
		sum[5] = 10000 * Person[5][0].birth.year + 100 * Person[5][0].birth.month + Person[5][0].birth.day;
		if (sum[a]<sum[5])
			f = e, e = d, d = c, c = b, b = a, a = 5;
		else {
			if (sum[b]<sum[5])
				f = e, e = d, d = c, c = b, b = 5;
			else {
				if (sum[c]<sum[5])
					f = e, e = d, d = c, c = 5;
				else {
					if (sum[d]<sum[5])
						f = e, e = d, d = 5;
					else {
						if (sum[e]<sum[5])
							f = e, e = 5;
						else
							e = 5;
					}
				}
			}
		}
		z++;
	}
	if (z < num) {
		sum[6] = 10000 * Person[6][0].birth.year + 100 * Person[6][0].birth.month + Person[6][0].birth.day;
		if (sum[a]<sum[6])
			g = f, f = e, e = d, d = c, c = b, b = a, a = 6;
		else {
			if (sum[b]<sum[6])
				g = f, f = e, e = d, d = c, c = b, b = 6;
			else {
				if (sum[c]<sum[6])
					g = f, f = e, e = d, d = c, c = 6;
				else {
					if (sum[d]<sum[6])
						g = f, f = e, e = d, d = 6;
					else {
						if (sum[e]<sum[6])
							g = f, f = e, e = 6;
						else {
							if (sum[f]<sum[6])
								g = f, f = 6;
							else
								g = 6;
						}
					}
				}
			}
		}
		z++;
	}
	if (z < num) {
		sum[7] = 10000 * Person[7][0].birth.year + 100 * Person[7][0].birth.month + Person[7][0].birth.day;
		if (sum[a]<sum[7])
			h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 7;
		else {
			if (sum[b]<sum[7])
				h = g, g = f, f = e, e = d, d = c, c = b, b = 7;
			else {
				if (sum[c]<sum[7])
					h = g, g = f, f = e, e = d, d = c, c = 7;
				else {
					if (sum[d]<sum[7])
						h = g, g = f, f = e, e = d, d = 7;
					else {
						if (sum[e]<sum[7])
							h = g, g = f, f = e, e = 7;
						else {
							if (sum[f]<sum[7])
								h = g, g = f, f = 7;
							else {
								if (sum[g] < sum[7])
									h = g, g = 7;
								else
									h = 7;
							}
						}
					}
				}
			}
		}
		z++;
	}
	if (z < num) {
		sum[8] = 10000 * Person[8][0].birth.year + 100 * Person[8][0].birth.month + Person[8][0].birth.day;
		if (sum[a]<sum[8])
			x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 8;
		else {
			if (sum[b]<sum[8])
				x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = 8;
			else {
				if (sum[c]<sum[8])
					x = h, h = g, g = f, f = e, e = d, d = c, c = 8;
				else {
					if (sum[d]<sum[8])
						x = h, h = g, g = f, f = e, e = d, d = 8;
					else {
						if (sum[e]<sum[8])
							x = h, h = g, g = f, f = e, e = 8;
						else {
							if (sum[f]<sum[8])
								x = h, h = g, g = f, f = 8;
							else {
								if (sum[g]<sum[8])
									x = h, h = g, g = 8;
								else {
									if (sum[h]<sum[8])
										x = h, h = 8;
									else
										x = 8;
								}
							}
						}
					}
				}
			}
		}
		z++;
	}
	if (z < num) {
		sum[9] = 10000 * Person[9][0].birth.year + 100 * Person[9][0].birth.month + Person[9][0].birth.day;
		if (sum[a]<sum[9])
			y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = a, a = 9;
		else {
			if (sum[b]<sum[9])
				y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = b, b = 9;
			else {
				if (sum[c]<sum[9])
					y = x, x = h, h = g, g = f, f = e, e = d, d = c, c = 9;
				else {
					if (sum[d]<sum[9])
						y = x, x = h, h = g, g = f, f = e, e = d, d = 9;
					else {
						if (sum[e]<sum[9])
							y = x, x = h, h = g, g = f, f = e, e = 9;
						else {
							if (sum[f]<sum[9])
								y = x, x = h, h = g, g = f, f = 9;
							else {
								if (sum[g]<sum[9])
									y = x, x = h, h = g, g = 9;
								else {
									if (sum[h]<sum[9])
										y = x, x = h, h = 9;
									else {
										if (sum[x]<sum[9])
											y = x, x = 9;
										else
											y = 9;
									}
								}
							}
						}
					}
				}
			}
		}
		z++;
	}
	z = 0;
	num += 1;
	puts("생년월일 올림차순 출력\n이름, 	생년,	생월,	생일,	성별,	주소,			핸드폰번호");
	if (z < num) {
		z++;
		printf("%s	", Person[a][0].name);
		printf("%d.	%d.	%d.	", Person[a][0].birth.year, Person[a][0].birth.month, Person[a][0].birth.day);
		printf("%s	", Person[a][0].sex);
		printf("%s	\n", Person[a][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[b][0].name);
		printf("%d.	%d.	%d.	", Person[b][0].birth.year, Person[b][0].birth.month, Person[b][0].birth.day);
		printf("%s	", Person[b][0].sex);
		printf("%s	\n", Person[b][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[c][0].name);
		printf("%d.	%d.	%d.	", Person[c][0].birth.year, Person[c][0].birth.month, Person[c][0].birth.day);
		printf("%s	", Person[c][0].sex);
		printf("%s	\n", Person[c][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[d][0].name);
		printf("%d.	%d.	%d.	", Person[d][0].birth.year, Person[d][0].birth.month, Person[d][0].birth.day);
		printf("%s	", Person[d][0].sex);
		printf("%s	\n", Person[d][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[e][0].name);
		printf("%d.	%d.	%d.	", Person[e][0].birth.year, Person[e][0].birth.month, Person[e][0].birth.day);
		printf("%s	", Person[e][0].sex);
		printf("%s	\n", Person[e][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[f][0].name);
		printf("%d.	%d.	%d.	", Person[f][0].birth.year, Person[f][0].birth.month, Person[f][0].birth.day);
		printf("%s	", Person[f][0].sex);
		printf("%s	\n", Person[f][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[g][0].name);
		printf("%d.	%d.	%d.	", Person[g][0].birth.year, Person[g][0].birth.month, Person[g][0].birth.day);
		printf("%s	", Person[g][0].sex);
		printf("%s	\n", Person[g][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[h][0].name);
		printf("%d.	%d.	%d.	", Person[h][0].birth.year, Person[h][0].birth.month, Person[h][0].birth.day);
		printf("%s	", Person[h][0].sex);
		printf("%s	\n", Person[h][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[x][0].name);
		printf("%d.	%d.	%d.	", Person[x][0].birth.year, Person[x][0].birth.month, Person[x][0].birth.day);
		printf("%s	", Person[x][0].sex);
		printf("%s	\n", Person[x][0].phnum);
	}
	if (z < num) {
		z++;
		printf("%s	", Person[y][0].name);
		printf("%d.	%d.	%d.	", Person[y][0].birth.year, Person[y][0].birth.month, Person[y][0].birth.day);
		printf("%s	", Person[y][0].sex);
		printf("%s	\n", Person[y][0].phnum);
	}


	puts("");
	return 0;
}
