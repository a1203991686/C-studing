struct student *inf_1()
{
	struct student *head, *r, *stu;
	head = (struct student *)malloc(sizeof(struct student));
	FILE *fp;
	printf("***********�ļ�����*************\n");
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
	printf("�ļ���ȡ�ɹ�����\n");
	printf("������ת�����Ժ󡭡�\n");
	Sleep(1000);
	system("cls");
	head = head->next;
	return head;
}