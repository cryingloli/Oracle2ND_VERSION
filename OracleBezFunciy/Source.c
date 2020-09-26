#include<stdio.h>
#include<locale.h>

int visokos(year)
{
	if (year % 400 != 0)
	{
		if (year % 100 == 0)
		{
			return(0);
		}
		else
		{
			if (year % 4 == 0)
			{
				return(1);
			}
			else
			{
				return(0);
			}
		}
	}
	else
	{
		return(1);
	}
}



main()
{
	int year, mon, day, nowyear, nowmon, nowday, year_s, mon_s, day_s, nowyear_s, nowmon_s, nowday_s;

	setlocale(LC_ALL, "Rus");

	printf("Введите Год рождения \n");
	scanf_s("%d", &year);
	printf("Введите Месяц рождения \n");
	scanf_s("%d", &mon);
	printf("Введите День рождения \n");
	scanf_s("%d", &day);
	printf("Введите Год \n");
	scanf_s("%d", &nowyear);
	printf("Введите Месяц \n");
	scanf_s("%d", &nowmon);
	printf("Введите День \n");
	scanf_s("%d", &nowday);

	year_s = year;
	mon_s = mon;
	day_s = day;
	nowyear_s = nowyear;
	nowmon_s = nowmon;
	nowday_s = nowday;

	int k = 0;

	if (year % 400 != 0)
	{
		if (year % 100 == 0)
		{
			printf("Вы родились не в високосный год \n\n");
		}
		else
		{
			if (year % 4 == 0)
			{
				printf("Вы родилиись в виссокосный год \n\n");
			}
			else
			{
				printf("Вы родились не в високосный год \n\n");
			}
		}
	}
	else
	{
		printf("Вы родились в високосный год \n\n");
	}

	year = year_s;
	mon = mon_s;
	day = day_s;
	nowyear = nowyear_s;
	nowmon = nowmon_s;
	nowday = nowday_s;

	while (mon+1 != 12)
	{
		if ((nowmon == 1) || (nowmon == 3) || (nowmon == 5) || (nowmon == 7) || (nowmon == 8) || (nowmon == 10) || (nowmon == 11))
		{
			k += 31;
		}
		else if ((nowmon == 2) && visokos(nowyear))
		{
			k += 29;
		}
		else if ((nowmon == 2) && visokos(nowyear))
		{
			k += 28;
		}
		else
		{
			k += 30;
		}
		mon++;
	}
	for (int i = 1; (i <= (nowmon - 1)); i++)
	{
		if ((nowmon == 1) || (nowmon == 3) || (nowmon == 5) || (nowmon == 7) || (nowmon == 8) || (nowmon == 10) || (nowmon == 11))
		{
			k += 31;
		}
		else if ((nowmon == 2) && visokos(nowyear))
		{
			k += 29;
		}
		else if ((nowmon == 2) && visokos(nowyear))
		{
			k += 28;
		}
		else
		{
			k += 30;
		}
	}

	int daycount = k;
	k = 0;
	year = year_s;
	mon = mon_s;
	day = day_s;
	nowyear = nowyear_s;
	nowmon = nowmon_s;
	nowday = nowday_s;

	if ((mon == 1) || (mon == 3) || (mon == 5) || (mon == 7) || (mon == 8) || (mon == 10) || (mon == 11))
	{
		for (int i = day; i <= 31; i++)
		{
			k++;
		}
	}
	else if ((mon == 2) && visokos(year))
	{
		for (int i = day; i <= 29; i++)
		{
			k++;
		}
	}
	else if ((mon == 2) && visokos(year))
	{
		for (int i = day; i <= 28; i++)
		{
			k++;
		}
	}
	else
	{
		for (int i = day; i <= 30; i++)
		{
			k++;
		}
	}

	daycount += k;
	k = 0;
	daycount += day;

	if (nowyear != year)
	{
		while (year + 1 != nowyear - 1)
		{
			if (visokos(year))
			{
				daycount += 366;
			}
			else
			{
				daycount += 365;
			}
			year++;
		}

	}
	else
	{
		printf("AAAAAAAAAAAAAAAAAAAAAAAAAA");
		//_Raises_SEH_exception_;
	}

	printf("Вы прожили %d ахахахаха с этим я разбираться точно не буду я итак сейчас вскроюсь \n\n", daycount);

	if ((mon == 3) && ((day >= 21) && (day <= 31)) || ((mon == 4) && (day <= 20)))
	{
		printf("Вы Овен\n\n");
	}
	else if ((mon == 4) && ((day >= 21) && (day <= 30)) || ((mon == 5) && (day <= 20)))
	{
		printf("Вы Телец\n\n");
	}
	else if ((mon == 5) && ((day >= 21) && (day <= 31)) || ((mon == 6) && (day <= 21)))
	{
		printf("Вы Близнецы\n\n");
	}
	else if ((mon == 6) && ((day >= 22) && (day <= 30)) || ((mon == 7) && (day <= 22)))
	{
		printf("Вы Рак\n\n");
	}
	else if ((mon == 7) && ((day >= 23) && (day <= 31)) || ((mon == 8) && (day <= 23)))
	{
		printf("Вы Лев\n\n");
	}
	else if ((mon == 8) && ((day >= 24) && (day <= 31)) || ((mon == 9) && (day <= 22)))
	{
		printf("Вы Дева\n\n");
	}
	else if ((mon == 9) && ((day >= 23) && (day <= 30)) || ((mon == 10) && (day <= 23)))
	{
		printf("Вы Весы\n\n");
	}
	else if ((mon == 10) && ((day >= 24) && (day <= 31)) || ((mon == 11) && (day <= 22)))
	{
		printf("Вы Скорпион\n\n");
	}
	else if ((mon == 11) && ((day >= 23) && (day <= 30)) || ((mon == 12) && (day <= 21)))
	{
		printf("Вы Стрелец\n\n");
	}
	else if ((mon == 12) && ((day >= 22) && (day <= 31)) || ((mon == 1) && (day <= 19)))
	{
		printf("Вы Козерог\n\n");
	}
	else if ((mon == 1) && ((day >= 20) && (day <= 31)) || ((mon == 2) && (day <= 18)))
	{
		printf("Вы Водолей\n\n");
	}
	else
	{
		printf("Вы Рыбы\n\n");
	}



	for (int i = 0; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Обезьяна\n\n");
		}
	for (int i = -1; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Коза\n\n");
		}
	for (int i = -2; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Лошадь\n\n");
		}
	for (int i = -3; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Змея\n\n");
		}
	for (int i = -4; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Дракон\n\n");
		}
	for (int i = -5; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Кролик\n\n");
		}
	for (int i = -6; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Тигр\n\n");
		}
	for (int i = -7; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Бык\n\n");
		}
	for (int i = -8; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Крыса\n\n");
		}
	for (int i = -11; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Петух\n\n");
		}
	for (int i = -12; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Собака\n\n");
		}
	for (int i = -9; i <= year; i += 12)
		if (i == year)
		{
			printf("Вы Свинья\n\n");
		}
}