# ifndef INVENTORY_H_
# define INVENTORY_H_

class Inventory
{
public:
	Inventory();
	Inventory(int num, int quan, double Cost);
	~Inventory();

	void  setItemNumber(int num);
	void setQuantity(int quan);
	void setCost(double Cost);
	void setTotalCost();
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();

private:
	int itemNumber, quantity;
	double cost, totalCost;
};
# endif
