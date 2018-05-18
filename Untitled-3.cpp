struct student *inf_1()
{
	struct student *head, *r, *stu;
	head = (struct student *)malloc(sizeof(struct student));
	FILE *fp;
	printf("***********文件读入*************\n");
	fp = fopen("d:/1.txt", "rt");
	/*
	head = (struct student *)malloc(sizeof(struct student));
	head->next = NULL;
	*/
	r = head;
	while (!feof(fp))
	{
		stu = (struct student *)malloc(sizeof(struct student));
		fscanf(fp, "%s %s %s %d %d %d", stu->num, stu->name, stu->class1, &stu->yw, &stu->sx, &stu->yy);
		r->next = stu;
		r = stu;
	}
	r->next = NULL;
	fclose(fp);
	printf("文件读取成功！！\n");
	printf("正在跳转，请稍后……\n");
	Sleep(1000);
	system("cls");
	head = head->next;
	return head;
}