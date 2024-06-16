#include <stdio.h>
#include <string.h>

#define MAX_CLIENTS 100
#define MAX_LAPTOPS 100
#define MAX_REQUESTS 100

typedef struct
{
    char name[50];
    char address[100];
    char phone[20];
} Client;

typedef struct
{
    char model[50];
    char brand[50];
    int year;
} Laptop;

typedef struct
{
    int client_id;
    int laptop_id;
    char problem[200];
    int expert_id;
} RepairRequest;

Client clients[MAX_CLIENTS];
int num_clients = 0;

Laptop laptops[MAX_LAPTOPS];
int num_laptops = 0;

RepairRequest repair_requests[MAX_REQUESTS];
int num_requests = 0;

void add_client()
{
    Client new_client;
    printf("Enter client name: ");
    scanf("%s", new_client.name);
    printf("Enter client address: ");
    scanf("%s", new_client.address);
    printf("Enter client phone: ");
    scanf("%s", new_client.phone);
    clients[num_clients++] = new_client;
    printf("Client added successfully.\n");
}

void add_laptop()
{
    Laptop new_laptop;
    printf("Enter laptop model: ");
    scanf("%s", new_laptop.model);
    printf("Enter laptop brand: ");
    scanf("%s", new_laptop.brand);
    printf("Enter laptop year: ");
    scanf("%d", &new_laptop.year);
    laptops[num_laptops++] = new_laptop;
    printf("Laptop added successfully.\n");
}

void update_client(int id)
{
    if (id >= num_clients)
    {
        printf("Invalid client ID.\n");
        return;
    }
    Client updated_client;
    printf("Enter updated client name: ");
    scanf("%s", updated_client.name);
    printf("Enter updated client address: ");
    scanf("%s", updated_client.address);
    printf("Enter updated client phone: ");
    scanf("%s", updated_client.phone);
    clients[id] = updated_client;
    printf("Client updated successfully.\n");
}

void update_laptop(int id)
{
    if (id >= num_laptops)
    {
        printf("Invalid laptop ID.\n");
        return;
    }
    Laptop updated_laptop;
    printf("Enter updated laptop model: ");
    scanf("%s", updated_laptop.model);
    printf("Enter updated laptop brand: ");
    scanf("%s", updated_laptop.brand);
    printf("Enter updated laptop year: ");
    scanf("%d", &updated_laptop.year);
    laptops[id] = updated_laptop;
    printf("Laptop updated successfully.\n");
}

void delete_client(int id)
{
    if (id >= num_clients)
    {
        printf("Invalid client ID.\n");
        return;
    }
    for (int i = id; i < num_clients - 1; i++)
    {
        clients[i] = clients[i + 1];
    }
    num_clients--;
    printf("Client deleted successfully.\n");
}

void delete_laptop(int id)
{
    if (id >= num_laptops)
    {
        printf("Invalid laptop ID.\n");
        return;
    }
    for (int i = id; i < num_laptops - 1; i++)
    {
        laptops[i] = laptops[i + 1];
    }
    num_laptops--;
    printf("Laptop deleted successfully.\n");
}

void add_repair_request()
{
    RepairRequest new_request;
    printf("Enter client ID: ");
    scanf("%d", &new_request.client_id);
    if (new_request.client_id >= num_clients)
    {
        printf("Invalid client ID.\n");
        return;
    }
    printf("Enter laptop ID: ");
    scanf("%d", &new_request.laptop_id);
    if (new_request.laptop_id >= num_laptops)
    {
        printf("Invalid laptop ID.\n");
        return;
    }
    printf("Enter problem description: ");
    scanf("%s", new_request.problem);
    printf("Enter ID of expert who will resolve the problem: ");
    scanf("%d", &new_request.expert_id);
    repair_requests[num_requests++] = new_request;
    printf("Repair request added successfully.\n");
}

void print_clients()
{
    printf("ID\tName\tAddress\tPhone\n");
    for (int i = 0; i < num_clients; i++)
    {
        printf("%d\t%s\t%s\t%s\n", i, clients[i].name, clients[i].address, clients[i].phone);
    }
}

void print_laptops()
{
    printf("ID\tModel\tBrand\tYear\n");
    for (int i = 0; i < num_laptops; i++)
    {
        printf("%d\t%s\t%s\t%d\n", i, laptops[i].model, laptops[i].brand, laptops[i].year);
    }
}

void print_repair_requests()
{
    printf("ID\tClient\tLaptop\tProblem\tExpert\n");
    for (int i = 0; i < num_requests; i++)
    {
        printf("%d\t%s\t%s\t%s\t%d\n", i, clients[repair_requests[i].client_id].name,
               laptops[repair_requests[i].laptop_id].model, repair_requests[i].problem,
               repair_requests[i].expert_id);
    }
}

int main()
{
    int choice;
    do
    {
        printf("1. Add client\n");
        printf("2. Add laptop\n");
        printf("3. Update client\n");
        printf("4. Update laptop\n");
        printf("5. Delete client\n");
        printf("6. Delete laptop\n");
        printf("7. Add repair request\n");
        printf("8. Print clients\n");
        printf("9. Print laptops\n");
        printf("10. Print repair requests\n");
        printf("11. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_client();
            break;
        case 2:
            add_laptop();
            break;
        case 3:
            printf("Enter client ID to update: ");
            int client_id;
            scanf("%d", &client_id);
            update_client(client_id);
            break;
        case 4:
            printf("Enter laptop ID to update: ");
            int laptop_id;
            scanf("%d", &laptop_id);
            update_laptop(laptop_id);
            break;
        case 5:
            printf("Enter client ID to delete: ");
            int client_id_to_delete;
            scanf("%d", &client_id_to_delete);
            delete_client(client_id_to_delete);
            break;
        case 6:
            printf("Enter laptop ID to delete: ");
            int laptop_id_to_delete;
            scanf("%d", &laptop_id_to_delete);
            delete_laptop(laptop_id_to_delete);
            break;
        case 7:
            add_repair_request();
            break;
        case 8:
            print_clients();
            break;
        case 9:
            print_laptops();
            break;
        case 10:
            print_repair_requests();
            break;
        case 11:
            printf("Program exited.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (choice != 11);
    return 0;
}
