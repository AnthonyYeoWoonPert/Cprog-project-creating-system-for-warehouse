#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<stdlib.h>i

void create();
int AAA_generate_id(void);
int AAB_generate_id(void);
int AAC_generate_id(void);
void modify();
void add();
void add_AAA();
void subtraction();
void subtraction_AAA();

void search();
void view();
void sort();
void tracking();

int main() {
	do {
		printf("Menu\n");
		printf("[1] Add product\n");
		printf("[2] Modify feild\n");
		printf("[3] Tracking\n");
		printf("[4] View\n");
		printf("[5] Search\n");
		printf("[6] Exit\n");
		int option;
		printf("\nChoose a number to perform the corresponding action : ");
		scanf("%d", &option);
		FILE* fp;

		switch (option)
		{
		case 1:
			printf("Add product");
			create();
			break;
		case 2:
			printf("Modify Feild");
			modify();
			break;
		case 3:
			printf("Tracking");
			tracking();
			break;
		case 4:
			printf("view");
			/*view();*/
			sort();
			break;
		case 5:
			printf("search");
			search();
			break;
		case 6:
			printf("exits");
			return 0;
		default:
			printf("\nEnter Valid Option\n");
		}
	} while (1);

	return 0;
}

void create() {
	struct data {
		/*char PartID[4];*/

		int PartID;
		char Product_name[100];
		char Part[4];
		struct {
			char Supplier_name[100];
			char Supplier_company[100];
		}Supplier;
		int Qty_initial;
		int Qty_available;
	}Item;

	int option;

	FILE* fp;
	FILE* fptr;
	FILE* fptr1;

	printf("Please Select Warehouse: \n");
	printf("[1] Warehouse AAA\n");
	printf("[2] Warehouse AAB\n");
	printf("[3] Warehouse AAC\n");
	scanf("%d", &option);

	switch (option) {
	case 1:
		printf("You have selected Warehouse AAA\n");

		printf("Choose Part: \n");
		printf("[ENG] Engine\n");
		printf("[TYR] Tyre\n");
		printf("[ARC] Aircond\n");
		printf("[RAD] Radio\n");
		printf("[WIN] Window\n");
		scanf("%s", &Item.Part);

		printf("\nEnter Product name : ");
		scanf("%s", &Item.Product_name);

		printf("\nEnter Supplier name : ");
		scanf("%s", &Item.Supplier.Supplier_name);

		printf("\nEnter Supplier company : ");
		scanf("%s", &Item.Supplier.Supplier_company);

		printf("\nEnter number of items available : ");
		scanf("%d", &Item.Qty_available);

		Item.Qty_initial = Item.Qty_available;

		Item.PartID = AAB_generate_id();

		fp = fopen("automobile_database.txt", "a");
		fptr1 = fopen("supplier_database.txt", "a");

		fprintf(fp, "%d ; %s ; %s ; %s ; %d ; %d \n", Item.PartID, Item.Product_name, Item.Part, Item.Supplier.Supplier_company, Item.Qty_initial, Item.Qty_available);
		fclose(fp);

		fprintf(fptr1, "%d ; %s ; %s ; %s \n", Item.PartID, Item.Product_name, Item.Supplier.Supplier_name, Item.Supplier.Supplier_company);
		fclose(fptr1);
		printf("Product Details:\n");
		printf(" Part ID :%d;\n Product Name: %s;\n Part: %s;\nSupplier Company: %s;\nQuantity: %d;\n", Item.PartID, Item.Product_name, Item.Part, Item.Supplier.Supplier_company, Item.Qty_available);

		printf("\nThe new product is successfully added\n");
		break;
	case 2:
		printf("You have selected Warehouse AAB\n");

		printf("Choose Part: \n");
		printf("[ENG] Engine\n");
		printf("[TYR] Tyre\n");
		printf("[ARC] Aircond\n");
		printf("[RAD] Radio\n");
		printf("[WIN] Window\n");
		scanf("%s", &Item.Part);

		printf("\nEnter Product name : ");
		scanf("%s", &Item.Product_name);

		printf("\nEnter Supplier name : ");
		scanf("%s", &Item.Supplier.Supplier_name);

		printf("\nEnter Supplier company : ");
		scanf("%s", &Item.Supplier.Supplier_company);

		printf("\nEnter number of items available : ");
		scanf("%d", &Item.Qty_available);

		Item.Qty_initial = Item.Qty_available;

		Item.PartID = AAB_generate_id();

		fp = fopen("automobile_database.txt", "a");
		fptr1 = fopen("supplier_database.txt", "a");

		fprintf(fp, "%d ; %s ; %s ; %s ; %d ; %d \n", Item.PartID, Item.Product_name, Item.Part, Item.Supplier.Supplier_company, Item.Qty_initial, Item.Qty_available);
		fclose(fp);

		fprintf(fptr1, "%d ; %s ; %s ; %s \n", Item.PartID, Item.Product_name, Item.Supplier.Supplier_name, Item.Supplier.Supplier_company);
		fclose(fptr1);
		printf("Product Details:\n");
		printf(" Part ID :%d;\n Product Name: %s;\n Part: %s;\nSupplier Company: %s;\nQuantity: %d;\n", Item.PartID, Item.Product_name, Item.Part, Item.Supplier.Supplier_company, Item.Qty_available);
		printf("\nThe new product is successfully added\n");
		break;
	case 3:
		printf("You have selected Warehouse AAC\n");

		printf("Choose Part: \n");
		printf("[ENG] Engine\n");
		printf("[TYR] Tyre\n");
		printf("[ARC] Aircond\n");
		printf("[RAD] Radio\n");
		printf("[WIN] Window\n");
		scanf("%s", &Item.Part);

		printf("Enter Product name : ");
		scanf("%s", &Item.Product_name);

		printf("Enter Supplier name : ");
		scanf("%s", &Item.Supplier.Supplier_name);

		printf("Enter Supplier company : ");
		scanf("%s", &Item.Supplier.Supplier_company);

		printf("Enter number of items available : ");
		scanf("%d", &Item.Qty_available);

		Item.Qty_initial = Item.Qty_available;

		Item.PartID = AAB_generate_id();

		fp = fopen("automobile_database.txt", "a");
		fptr1 = fopen("supplier_database.txt", "a");

		fprintf(fp, "%d ; %s ; %s ; %s ; %d ; %d \n", Item.PartID, Item.Product_name, Item.Part, Item.Supplier.Supplier_company, Item.Qty_initial, Item.Qty_available);
		fclose(fp);

		fprintf(fptr1, "%d ; %s ; %s ; %s ; %s \n", Item.PartID, Item.Product_name, Item.Part, Item.Supplier.Supplier_name, Item.Supplier.Supplier_company);
		fclose(fptr1);
		printf("Product Details:\n");
		printf(" Part ID :%d;\n Product Name: %s;\n Part: %s;\nSupplier Company: %s;\nQuantity: %d;\n", Item.PartID, Item.Product_name, Item.Part, Item.Supplier.Supplier_company, Item.Qty_available);

		printf("\nThe new product is successfully added\n");
		break;

	default:
		printf("Please enter a valid option.");
	}

	return 0;
}

int AAA_generate_id(void) {
	/*char temp_Serial_number[100];*/
	int temp_Serial_number[1000];
	char temp_Product_name[1000][100];
	char temp_part[1000][100];
	char temp_Supplier_name[1000][100];
	int temp_qty_initial[1000];
	int temp_qty_available[1000];
	int i = 0, idnum = 0;


	FILE* fptr = fopen("automobile_database.txt", "a");


	while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial[i], &temp_qty_available[i]) != EOF)
	{
		idnum = temp_Serial_number[i];
		++i;
	}
	fclose(fptr);

	return idnum + 1;
}

int AAB_generate_id(void) {
	/*char temp_Serial_number[100];*/
	int temp_Serial_number[1000];
	char temp_Product_name[1000][100];
	char temp_part[1000][100];
	char temp_Supplier_name[1000][100];
	int temp_qty_initial[1000];
	int temp_qty_available[1000];
	int i = 0, idnum = 0;


	FILE* fptr = fopen("automobile_database.txt", "a");


	while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial[i], &temp_qty_available[i]) != EOF)
	{
		idnum = temp_Serial_number[i];
		++i;
	}
	fclose(fptr);

	return idnum + 1;
}

int AAC_generate_id(void) {
	/*char temp_Serial_number[100];*/
	int temp_Serial_number[1000];
	char temp_Product_name[1000][100];
	char temp_part[1000][100];
	char temp_Supplier_name[1000][100];
	int temp_qty_initial[1000];
	int temp_qty_available[1000];
	int i = 0, idnum = 0;


	FILE* fptr = fopen("automobile_database.txt", "a");


	while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial[i], &temp_qty_available[i]) != EOF)
	{
		idnum = temp_Serial_number[i];
		++i;
	}
	fclose(fptr);

	return idnum + 1;
}

void modify() {
	int option;

	printf("Please select an option: \n");
	printf("[1] Add\n");
	printf("[2] Subtract\n");
	scanf("%d", &option);
	switch (option) {

	case 1:
		add();
		break;

	case 2:
		subtraction();
		break;

	default:
		printf("Please enter a valid option");
	}

}

void add() {
	int option;

	printf("You have chosen ADD\n");
	printf("Please select a warehouse: \n");
	printf("[1] Warehouse AAA\n");
	printf("[2] Warehouse AAB\n");
	printf("[3] Warehouse AAC\n");
	scanf("%d", &option);

	switch (option) {
	case 1:
		add_AAA();
		break;

	case 2:
		add_AAA();
		break;

	case 3:
		add_AAA();
		break;

	default:
		printf("Please enter a valid option");
	}
}

void add_AAA() {
	int temp_Serial_number[1000];
	char temp_Product_name[1000][100];
	char temp_part[1000][100];
	char temp_Supplier_name[1000][100];
	int temp_qty_initial[1000];
	int temp_qty_available[1000];
	int copy_Serial_number[1000];
	char copy_Product_name[1000][100];
	char copy_part[1000][100];
	char copy_Supplier_name[1000][100];
	int copy_qty_initial[1000];
	int copy_qty_available[1000];
	int i = 0, j = 0, idnum = 0, initial, add;

	do {
		FILE* fptr;
		fptr = fopen("automobile_database.txt", "r");

		printf("\nEnter the part ID of the item to edit: \n");
		scanf("%d", &idnum);

		while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial[i], &temp_qty_available[i]) != EOF)
		{
			if (temp_Serial_number[i] == idnum)
				break;
			++i;
		}
		fclose(fptr);

		if (temp_Serial_number[i] != idnum)
			printf("\nPart ID doesn't exist! Please try again\n");

	} while (temp_Serial_number[i] != idnum);

	printf(" Part ID :%d;\n Product Name: %s;\n Part: %s;\nSupplier Company: %s;\nQuantity: %d;\n", temp_Serial_number[i], temp_Product_name[i], temp_part[i], temp_Supplier_name[i], temp_qty_available[i]);


	/*initial = temp_qty_available[i];*/


	printf("Please enter quatity to add:");
	scanf("%d", &add);

	/*int sum = temp_qty_available + add;*/


	FILE* fptr;
	fptr = fopen("automobile_database.txt", "r");

	while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial[i], &temp_qty_available[i]) != EOF) {

		if (temp_Serial_number[i] == idnum) {
			temp_qty_initial[i] = temp_qty_available[i];
			temp_qty_available[i] = temp_qty_available[i] + add;
		}

		copy_Serial_number[j] = temp_Serial_number[i];
		strcpy(copy_Product_name[j], temp_Product_name[i]);
		strcpy(copy_part[j], temp_part[i]);
		strcpy(copy_Supplier_name[j], temp_Supplier_name[i]);
		copy_qty_initial[j] = temp_qty_initial[i];
		copy_qty_available[j] = temp_qty_available[i];

		++i;
		++j;
	}
	fclose(fptr);

	fptr = fopen("automobile_database.txt", "w");

	for (j = 0; j < i; j++) {
		fprintf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", temp_Serial_number[j], temp_Product_name[j], temp_part[j], temp_Supplier_name[j], temp_qty_initial[j], temp_qty_available[j]);

	}
	fclose(fptr);

	printf("After modified:\n");
	printf("%d ; %s ; %s ; %s ; %d ; %d \n", temp_Serial_number[j], temp_Product_name[j], temp_part[j], temp_Supplier_name[j], temp_qty_initial[j], temp_qty_available[j]);

	return 0;

}

void subtraction() {
	int option;

	printf("You have chosen SUBTRACT\n");
	printf("Please select a warehouse: \n");
	printf("[1] Warehouse AAA\n");
	printf("[2] Warehouse AAB\n");
	printf("[3] Warehouse AAC\n");
	scanf("%d", &option);

	switch (option) {
	case 1:
		subtraction_AAA();
		break;

	case 2:
		subtraction_AAA();
		break;

	case 3:
		subtraction_AAA();
		break;

	default:
		printf("Please enter a valid option");
	}
}

void subtraction_AAA() {
	int temp_Serial_number[1000];
	char temp_Product_name[1000][100];
	char temp_part[1000][100];
	char temp_Supplier_name[1000][100];
	int temp_qty_initial[1000];
	int temp_qty_available[1000];
	int copy_Serial_number[1000];
	char copy_Product_name[1000][100];
	char copy_part[1000][100];
	char copy_Supplier_name[1000][100];
	int copy_qty_initial[1000];
	int copy_qty_available[1000];
	int i = 0, j = 0, idnum = 0, initial, minus, mistake= 0;

	do {
		FILE* fptr;
		fptr = fopen("automobile_database.txt", "r");

		printf("\nEnter the part ID of the item to edit: \n");
		scanf("%d", &idnum);

		while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial[i], &temp_qty_available[i]) != EOF)
		{
			if (temp_Serial_number[i] == idnum)
				break;
			++i;
		}
		fclose(fptr);

		if (temp_Serial_number[i] != idnum)
			printf("\nPart ID doesn't exist! Please try again\n");

	} while (temp_Serial_number[i] != idnum);

	printf(" Part ID :%d;\n Product Name: %s;\n Part: %s;\nSupplier Company: %s;\nQuantity: %d;\n", temp_Serial_number[i], temp_Product_name[i], temp_part[i], temp_Supplier_name[i], temp_qty_available[i]);


	/*initial = temp_qty_available[i];*/


	

	do {
		printf("Please enter quatity to subtract:");
		scanf("%d", &minus);

		if (temp_qty_available[i] < minus) {
			printf("stfu");
			mistake = 1;
		}
		else{
			mistake = 0;
		}
	} while (mistake == 0);
	

	/*int sum = temp_qty_available + add;*/


	FILE* fptr;
	fptr = fopen("automobile_database.txt", "r");

	while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial[i], &temp_qty_available[i]) != EOF) {

		if (temp_Serial_number[i] == idnum) {
			temp_qty_initial[i] = temp_qty_available[i];
			temp_qty_available[i] = temp_qty_available[i] - minus;
		}

		copy_Serial_number[j] = temp_Serial_number[i];
		strcpy(copy_Product_name[j], temp_Product_name[i]);
		strcpy(copy_part[j], temp_part[i]);
		strcpy(copy_Supplier_name[j], temp_Supplier_name[i]);
		copy_qty_initial[j] = temp_qty_initial[i];
		copy_qty_available[j] = temp_qty_available[i];

		++i;
		++j;
	}
	fclose(fptr);

	fptr = fopen("automobile_database.txt", "w");

	for (j = 0; j < i; j++) {
		fprintf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", temp_Serial_number[j], temp_Product_name[j], temp_part[j], temp_Supplier_name[j], temp_qty_initial[j], temp_qty_available[j]);

	}
	fclose(fptr);

	printf("After modified:\n");
	printf("%d ; %s ; %s ; %s ; %d ; %d \n", temp_Serial_number, temp_Product_name, temp_part, temp_Supplier_name, temp_qty_initial, temp_qty_available);

	return 0;

}

void search() {
	int temp_Serial_number[1000];
	char temp_Product_name[1000][100];
	char temp_part[1000][100];
	char temp_Supplier_name[1000][100];
	char temp_Supplier_company[1000][100];
	int temp_qty_initial[1000];
	int temp_qty_available[1000];
	int i = 0, idnum;


	do {
		FILE* fptr;
		fptr = fopen("automobile_database.txt", "r");

		printf("\nEnter the part ID of the item to edit: \n");
		scanf("%d", &idnum);

		while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial[i], &temp_qty_available[i]) != EOF)
		{
			if (temp_Serial_number[i] == idnum)
				break;
			++i;
		}
		fclose(fptr);

		if (temp_Serial_number[i] != idnum)
			printf("\nPart ID doesn't exist! Please try again\n");

	} while (temp_Serial_number[i] != idnum);

	printf(" Part ID :%d;\n Product Name: %s;\n Part: %s;\nSupplier Name: %s;\nQuantity: %d;\n", temp_Serial_number[i], temp_Product_name[i], temp_part[i], temp_Supplier_name[i], temp_qty_available[i]);

	do {
		FILE* fptr;
		fptr = fopen("supplier_database.txt", "r");

		while (fscanf(fptr, "%d ; %s ; %s ; %s ; %s ;\n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_Supplier_company[i]) != EOF)
		{
			if (temp_Serial_number[i] == idnum)
				break;
			++i;
		}
		fclose(fptr);

		if (temp_Serial_number[i] != idnum)
			printf("\nPart ID doesn't exist! Please try again\n");

	} while (temp_Serial_number[i] != idnum);

	printf(" Part ID :%d;\n Product Name: %s;\n Part: %s;\nSupplier Name: %s;\nSupplier Company: %s;\n", temp_Serial_number[i], temp_Product_name[i], temp_part[i], temp_Supplier_name[i], temp_Supplier_company[i]);

	return 0;
}


void view() {
	int temp_Serial_number[1000];
	char temp_Product_name[1000][100];
	char temp_part[1000][100];
	char temp_Supplier_name[1000][100];
	char temp_Supplier_company[1000][100];
	int temp_qty_initial[1000];
	int temp_qty_available[1000];
	int i = 0;

	FILE* fptr = fopen("automobile_database.txt", "r");

	while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial, &temp_qty_available[i]) != EOF)
	{
		printf("%d ; %s ; %s ; %s ; %s ; %d \n", temp_Serial_number, temp_Product_name, temp_part, temp_Supplier_name, temp_Supplier_company, temp_qty_available);
		++i;
	}
	fclose(fptr);

	return 0;
}


void tracking() {
	int temp_Serial_number[1000];
	char temp_Product_name[1000][100];
	char temp_part[1000][100];
	char temp_Supplier_name[1000][100];
	char temp_Supplier_company[1000][100];
	int temp_qty_initial[1000];
	int temp_qty_available[1000];
	int i = 0, j = 0, counter=0;

	FILE* fptr = fopen("automobile_database.txt", "r");

	//while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial, &temp_qty_available[i]) != EOF)
	//{
	//	++i;
	//}
	//printf("Product with less than 10 units:");

	//for (j = 0; j < i; j++) {
	//	if (temp_qty_available[j] < 10) {
	//		counter++;
	//		printf("%d ; %s ; %s ; %s ; %s ; %d \n", temp_Serial_number[j], temp_Product_name[j], temp_part[j], temp_Supplier_name[j], temp_Supplier_company[j], temp_qty_available[j]);

	//	}
	//}
	//i think la this one above can just put inside the [i] rather than put into the [j]
	printf("Product with less than 10 units:");

	while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial, &temp_qty_available[i]) != EOF)
	{
		if (temp_qty_available[i] < 10) {
			printf("%d ; %s ; %s ; %s ; %s ; %d \n", temp_Serial_number[j], temp_Product_name[j], temp_part[j], temp_Supplier_name[j], temp_Supplier_company[j], temp_qty_available[j]);
			++counter;
		}
		++i;
	}

	if (counter < 1) {
		printf("sorry there are no item which is less than 10\n");
	}


	return 0;
}

void sort() {
	int temp_Serial_number[1000];
	char temp_Product_name[1000][100];
	char temp_part[1000][100];
	char temp_Supplier_name[1000][100];
	int temp_qty_initial[1000];
	int temp_qty_available[1000];
	int copy_Serial_number[1000];
	int i = 0, num = 0, temp;


	FILE* fptr = fopen("automobile_database.txt", "a");


	while (fscanf(fptr, "%d ; %s ; %s ; %s ; %d ; %d \n", &temp_Serial_number[i], &temp_Product_name[i], &temp_part[i], &temp_Supplier_name[i], &temp_qty_initial[i], &temp_qty_available[i]) != EOF)
	{
		copy_Serial_number[i] = temp_Serial_number[i];
		++i;
	}
	fclose(fptr);

	num = i;

	for (i = 1; i <= num; i++) {
		for (j = 0; j <= num - i; j++) {
			if (strcmp(copy_Serial_number[j], copy_Serial_number[j + 1]) > 0) {
				strcpy(temp, copy_Serial_number[j]);
				strcpy(copy_Serial_number[j], copy_Serial_number[j + 1]);
				strcpy(copy_Serial_number[j + 1], temp);
			}
		}
	}

	for (i = 0; i <= num; i++) {
		printf("%d/n", copy_Serial_number[i]);
	}
		

}