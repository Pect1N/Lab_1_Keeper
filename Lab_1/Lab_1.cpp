#include <iostream>
#include <fstream>
#include "Figures.h"
#include "Flat.h"
#include "Voluminous.h"
#include "Keeper.h"
#include "Functions.h"

using namespace std;

int main(void)
{
	Keeper* flat_start = 0; // ��������� �� ������ ������ ������� �����
	Keeper* flat_finish = 0; // ��������� �� ����� ������ ������� �����
	Keeper* voluminous_start = 0; // ��������� �� ������ ������ �������� �����
	Keeper* voluminous_finish = 0; // ��������� �� ����� ������ �������� �����
	char global_choise = 0; // ���������� ��� ����������� switch
	int global_exit = 0; // ���������� ��� ����������� ����

	while (global_exit != 1)
	{
		global_choise = 0;

		show_menu(1);

		cin >> global_choise;

		switch (global_choise)
		{
		case '1': // Create
		{
			char creation_choise = 0; // ���������� ��� switch �������� ��������
			int creation_exit = 0; // ���� ������ ���� �������� �������

			while (creation_exit != 1)
			{
				creation_choise = 0;
				system("cls");
				cout << "What should be created?" << endl;
				show_menu(2);

				cin >> creation_choise;

				switch (creation_choise)
				{
				case '1': // Flat +
				{
					int flat_exit = 0; // ���� ������ ���� ������� �����
					char flat_choise = 0; // ���������� ��� switch ������ ������
					float razmer = 0;

					while (flat_exit != 1)
					{
						flat_choise = 0;
						razmer = 0;
						Keeper* temp_keeper = new Keeper; // ������ ������� ������ � �����������
						system("cls");

						show_menu(3);

						cin >> flat_choise;

						if (flat_choise != '7')
						{
							if (flat_start == 0) // �������� �� ������� ������
								flat_start = flat_finish = temp_keeper;
							else
							{
								flat_finish->set_next(temp_keeper); // ������������� ��������� �� ����� ������
								temp_keeper->set_prev(flat_finish); // ������������� ��������� �� ����� ������
								flat_finish = temp_keeper; // ������������� ��������� �� ����� ����� ������
							}
						}

						switch (flat_choise)
						{
						case '1': // Circle +
						{
							Figure* temp_figure = new Circle; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(1); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter circle radius" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_radius(razmer); // ��������� �������

							temp_keeper->get_obj()->set_ploshad(); // ���������� �������
							break;
						}
						case '2': // Triangle +
						{
							Figure* temp_figure = new Triangle; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(2); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter triangle base" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_base(razmer); // ��������� �������

							cout << "Enter triangle left side" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_left(razmer); // ��������� �������

							cout << "Enter triangle right side" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_right(razmer); // ��������� �������

							temp_keeper->get_obj()->set_ploshad(); // ���������� �������
							break;
						}
						case '3': // Sqare +
						{
							Figure* temp_figure = new Sqare; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(3); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter sqare side" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_side(razmer); // ��������� �������

							temp_keeper->get_obj()->set_ploshad(); // ���������� �������
							break;
						}
						case '4': // Trapezioid +
						{
							Figure* temp_figure = new Trapezioid; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(4); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter trapezioid top" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_top(razmer); // ��������� �������

							cout << "Enter trapezioid base" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_base(razmer); // ��������� �������

							cout << "Enter trapezioid left" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_left(razmer); // ��������� �������

							cout << "Enter trapezioid right" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_right(razmer); // ��������� �������

							temp_keeper->get_obj()->set_ploshad(); // ���������� �������
							break;
						}
						case '5': // Rhombus +
						{
							Figure* temp_figure = new Rhombus; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(5); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter rhombus first" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_first_diag(razmer); // ��������� �������

							cout << "Enter rhombus second" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_second_diag(razmer); // ��������� �������

							temp_keeper->get_obj()->set_ploshad(); // ���������� �������
							break;
						}
						case '6': // Rectangle +
						{
							Figure* temp_figure = new Rectangle; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(6); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter rectangle width" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_width(razmer); // ��������� ������
							cout << "Enter rectangle height" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_height(razmer); // ��������� ������
							temp_keeper->get_obj()->set_ploshad();
							break;
						}
						case '7': // Exit +
						{
							flat_exit = 1;
							delete temp_keeper;
							break;
						}
						default: // Wrong +
						{
							delete temp_keeper;
							cout << "Wrong enter" << endl;
							system("pause");
							break;
						}
						}
					}
					break;
				}
				case '2': // Voluminous
				{
					int voluminous_exit = 0; // ���� ������ ���� ������� �����
					char voluminous_choise = 0; // ���������� ��� switch ������ ������
					float razmer = 0;

					while (voluminous_exit != 1)
					{
						voluminous_choise = 0;
						razmer = 0;
						Keeper* temp_keeper = new Keeper; // ������ ������� ������ � �����������
						system("cls");

						show_menu(4);

						cin >> voluminous_choise;

						if (voluminous_choise != '6')
						{
							if (voluminous_start == 0) // �������� �� ������� ������
								voluminous_start = voluminous_finish = temp_keeper;
							else
							{
								voluminous_finish->set_next(temp_keeper); // ������������� ��������� �� ����� ������
								temp_keeper->set_prev(voluminous_finish); // ������������� ��������� �� ����� ������
								voluminous_finish = temp_keeper; // ������������� ��������� �� ����� ����� ������
							}
						}

						switch (voluminous_choise)
						{
						case '1': // Sphere +
						{
							Figure* temp_figure = new Sphere; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(1); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter Sphere radius" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_radius(razmer); // ��������� �������

							temp_keeper->get_obj()->set_ploshad(); // ���������� �������
							break;
						}
						case '2': // Pyramid +
						{
							Figure* temp_figure = new Pyramid; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(2); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter Pyramid base" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_base(razmer); // ��������� �������

							cout << "Enter Pyramid height" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_height(razmer); // ��������� �������

							temp_keeper->get_obj()->set_ploshad(); // ���������� �������
							break;
						}
						case '3': // Cylinder +
						{
							Figure* temp_figure = new Cylinder; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(3); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter Cylinder base" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_base(razmer); // ��������� �������

							cout << "Enter Cylinder height" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_height(razmer); // ��������� �������

							temp_keeper->get_obj()->set_ploshad(); // ���������� �������
							break;
						}
						case '4': // Kube +
						{
							Figure* temp_figure = new Kube; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(4); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter Kube side" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_side(razmer); // ��������� �������

							temp_keeper->get_obj()->set_ploshad(); // ���������� �������
							break;
						}
						case '5': // Cone +
						{
							Figure* temp_figure = new Cone; // ������ �������

							temp_keeper->set_obj(temp_figure); // ����������� ��������� ������ � ��������
							temp_keeper->get_obj()->set_name(5); // ������������� ��� (������� � ������� ������)
							temp_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

							cout << "Enter Pyramid base" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_base(razmer); // ��������� �������

							cout << "Enter Pyramid height" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_height(razmer); // ��������� �������

							temp_keeper->get_obj()->set_ploshad(); // ���������� �������
							break;
						}
						case '6': // Exit +
						{
							voluminous_exit = 1;
							delete temp_keeper;
							break;
						}
						default: // Wrong +
						{
							delete temp_keeper;
							cout << "Wrong enter" << endl;
							system("pause");
							break;
						}
						}
					}
					break;
				}
				case '3': // Exit +
				{
					creation_exit = 1;
					break;
				}
				default: // Wrong +
				{
					cout << "Wrong enter" << endl;
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '2': // Edit +
		{
			char edit_choise = 0; // ���������� ��� switch ��������� �������
			int edit_exit = 0; // ���� ������ �� ���� ��������� �������

			while (edit_exit != 1)
			{
				edit_choise = 0;
				system("cls");
				cout << "What should we edit?" << endl;
				show_menu(2);

				cin >> edit_choise;

				switch (edit_choise)
				{
				case '1': // Flat +
				{
					if (flat_start != 0) // �������� �� ������� �������
					{
						system("cls");
						int i = 1;
						Keeper* temp_show = flat_start;
						while (temp_show != 0)
						{
							cout << i << endl; // ����� ������ ��������
							temp_show->get_obj()->show(); // ����� ������ ��������
							cout << endl;
							++i;
							temp_show = temp_show->get_next();
						}

						char edit_element_choise = 0;
						int edit_counter = 49;
						Keeper* temp_element = flat_start;
						cout << "Enter number element to edit" << endl;

						cin >> edit_element_choise; // ���� ������ ����������� ��������

						while (edit_counter != edit_element_choise && temp_element != 0) // ���� �� ����� � �� ������ �������
						{
							++edit_counter;
							temp_element = temp_element->get_next();
						}
						if (temp_element != 0) // ���� ����� ������� ����
						{
							char size_choise = 0;
							int size_exit = 0;

							while (size_exit != 1)
							{
								size_choise = 0;
								system("cls");
								cout << "What size should be edited?" << endl;
								temp_element->get_obj()->show_size();

								cin >> size_choise;

								size_exit = temp_element->get_obj()->size_change(size_choise);
							}
						}
						else
							cout << "Wrong number" << endl;
					}
					else
						cout << "No elements" << endl;
					system("pause");

					break;
				}
				case '2': // Voluminous +
				{
					{
						if (voluminous_start != 0) // �������� �� ������� �������
						{
							system("cls");
							int i = 1;
							Keeper* temp_show = voluminous_start;
							while (temp_show != 0)
							{
								cout << i << endl; // ����� ������ ��������
								temp_show->get_obj()->show(); // ����� ������ ��������
								cout << endl;
								++i;
								temp_show = temp_show->get_next();
							}

							char edit_element_choise = 0;
							int edit_counter = 49;
							Keeper* temp_element = voluminous_start;
							cout << "Enter number element to edit" << endl;

							cin >> edit_element_choise; // ���� ������ ����������� ��������

							while (edit_counter != edit_element_choise && temp_element != 0) // ���� �� ����� � �� ������ �������
							{
								++edit_counter;
								temp_element = temp_element->get_next();
							}
							if (temp_element != 0) // ���� ����� ������� ����
							{
								char size_choise = 0;
								int size_exit = 0;

								while (size_exit != 1)
								{
									size_choise = 0;
									system("cls");
									cout << "What size should be edited?" << endl;
									temp_element->get_obj()->show_size();

									cin >> size_choise;

									size_exit = temp_element->get_obj()->size_change(size_choise);
								}
							}
							else
								cout << "Wrong number" << endl;
						}
						else
							cout << "No elements" << endl;
						system("pause");

						break;
					}

					break;
				}
				case '3': // Exit +
				{
					edit_exit = 1;
					break;
				}
				default: // Wrong +
				{
					cout << "Wrong enter" << endl;
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '3': // Delete +
		{
			char delete_choise = 0; // ���������� ��� switch �������� ��������
			int delete_exit = 0; // ���� ������ ���� �������� �������

			while (delete_exit != 1)
			{
				delete_choise = 0;
				system("cls");
				cout << "What should be deleted?" << endl;
				show_menu(2);

				cin >> delete_choise;

				switch (delete_choise)
				{
				case '1': // Flat +
				{
					if (flat_start != 0) // �������� �� ������� �������
					{
						system("cls");
						int i = 1;
						Keeper* temp_show = flat_start;

						while (temp_show != 0)
						{
							cout << i << endl; // ����� ������ ��������
							temp_show->get_obj()->show(); // ����� ������ ��������
							cout << endl;
							++i;
							temp_show = temp_show->get_next();
						}

						char delete_element_choise = 0;
						int element_counter = 49;
						Keeper* temp_element = flat_start;
						cout << "Enter number element to delete" << endl;

						cin >> delete_element_choise; // ���� ������ ���������� ��������

						while (element_counter != delete_element_choise && temp_element != 0) // ���� �� ����� � �� ������ �������
						{
							++element_counter;
							temp_element = temp_element->get_next();
						}
						if (temp_element != 0) // ���� ����� ������� ����
						{
							if (temp_element->get_prev() != 0) // �������� �� ������� ����������� ��������
							{
								if (temp_element->get_next() != 0)
								{
									temp_element->get_prev()->set_next(temp_element->get_next()); // ���������� ��� ����������� �������� ��������� ������� (��� ����������� ��������� ��� ��� �������� ���������)
									temp_element->get_next()->set_prev(temp_element->get_prev()); // ���������� ��� ���������� �������� ���������� ������� (��� ���������� ���������� ��� ��� �������� ����������)
									delete temp_element->get_obj();
									delete temp_element;
								}
								else // ����� ������ �������
								{
									temp_element->get_prev()->set_next(0); // ���������� ��� ����������� �������� ��������� ������� (��� ����������� ��������� ��� ��� �������� ���������, ������ 0)
									flat_finish = temp_element->get_prev();
									delete temp_element->get_obj();
									delete temp_element;
								}
							}
							else
							{
								if (temp_element->get_next() != 0) // ����� ����� �������
								{
									temp_element->get_next()->set_prev(0); // ���������� ��� ���������� �������� ���������� ������� (��� ���������� ���������� ��� ��� �������� ����������, ������ 0)
									flat_start = temp_element->get_next();
									delete temp_element->get_obj();
									delete temp_element;
								}
								else // ���� ������� ������������
								{
									delete temp_element->get_obj();
									delete temp_element;
									flat_start = flat_finish = 0;
								}
							}
						}
						else
							cout << "Wrong number" << endl;
					}
					else
						cout << "No elements" << endl;


					system("pause");
					break;
				}
				case '2': // Voluminous +
				{
					{
						if (voluminous_start != 0) // �������� �� ������� �������
						{
							system("cls");
							int i = 1;
							Keeper* temp_show = voluminous_start;

							while (temp_show != 0)
							{
								cout << i << endl; // ����� ������ ��������
								temp_show->get_obj()->show(); // ����� ������ ��������
								cout << endl;
								++i;
								temp_show = temp_show->get_next();
							}

							char delete_element_choise = 0;
							int element_counter = 49;
							Keeper* temp_element = voluminous_start;
							cout << "Enter number element to delete" << endl;

							cin >> delete_element_choise; // ���� ������ ���������� ��������

							while (element_counter != delete_element_choise && temp_element != 0) // ���� �� ����� � �� ������ �������
							{
								++element_counter;
								temp_element = temp_element->get_next();
							}
							if (temp_element != 0) // ���� ����� ������� ����
							{
								if (temp_element->get_prev() != 0) // �������� �� ������� ����������� ��������
								{
									if (temp_element->get_next() != 0)
									{
										temp_element->get_prev()->set_next(temp_element->get_next()); // ���������� ��� ����������� �������� ��������� ������� (��� ����������� ��������� ��� ��� �������� ���������)
										temp_element->get_next()->set_prev(temp_element->get_prev()); // ���������� ��� ���������� �������� ���������� ������� (��� ���������� ���������� ��� ��� �������� ����������)
										delete temp_element->get_obj();
										delete temp_element;
									}
									else // ����� ������ �������
									{
										temp_element->get_prev()->set_next(0); // ���������� ��� ����������� �������� ��������� ������� (��� ����������� ��������� ��� ��� �������� ���������, ������ 0)
										flat_finish = temp_element->get_prev();
										delete temp_element->get_obj();
										delete temp_element;
									}
								}
								else
								{
									if (temp_element->get_next() != 0) // ����� ����� �������
									{
										temp_element->get_next()->set_prev(0); // ���������� ��� ���������� �������� ���������� ������� (��� ���������� ���������� ��� ��� �������� ����������, ������ 0)
										flat_start = temp_element->get_next();
										delete temp_element->get_obj();
										delete temp_element;
									}
									else // ���� ������� ������������
									{
										delete temp_element->get_obj();
										delete temp_element;
										voluminous_start = voluminous_finish = 0;
									}
								}
							}
							else
								cout << "Wrong number" << endl;
						}
						else
							cout << "No elements" << endl;


						system("pause");
						break;
					}

					break;
				}
				case '3': // Exit +
				{
					delete_exit = 1;
					break;
				}
				default: // Wrong +
				{
					cout << "Wrong enter" << endl;
					system("pause");
					break;
				}
				}
			}

			break;
		}
		case '4': // Save
		{
			char save_choise = 0; // ���������� ��� switch ���������� ��������
			int save_exit = 0; // ���� ������ ���� ���������� �������

			while (save_exit != 1)
			{
				save_choise = 0;
				system("cls");
				cout << "What should be saved?" << endl;
				show_menu(2);

				cin >> save_choise;

				switch (save_choise)
				{
				case '1': // Flat +
				{
					ofstream out;
					out.open("Flat.txt", ios_base::trunc);
					Keeper* temp_save = flat_start;

					while (temp_save != 0)
					{
						out << temp_save->get_obj()->get_name();
						out << '\n';
						out << temp_save->get_obj()->get_ploshad();
						out << '\n';
						if (temp_save->get_obj()->get_name() == 1) // Circle +
						{
							out << temp_save->get_obj()->get_radius();
							out << '\n';
						}
						else if (temp_save->get_obj()->get_name() == 2) // Triangle  +
						{
							out << temp_save->get_obj()->get_base();
							out << '\n';
							out << temp_save->get_obj()->get_left();
							out << '\n';
							out << temp_save->get_obj()->get_right();
							out << '\n';
						}
						else if (temp_save->get_obj()->get_name() == 3) // Sqare +
						{
							out << temp_save->get_obj()->get_side();
							out << '\n';
						}
						else if (temp_save->get_obj()->get_name() == 4) // Trapezioid +
						{
							out << temp_save->get_obj()->get_top();
							out << '\n';
							out << temp_save->get_obj()->get_base();
							out << '\n';
							out << temp_save->get_obj()->get_left();
							out << '\n';
							out << temp_save->get_obj()->get_right();
							out << '\n';
						}
						else if (temp_save->get_obj()->get_name() == 5) // Rhombus +
						{
							out << temp_save->get_obj()->get_first_diag();
							out << '\n';
							out << temp_save->get_obj()->get_second_diag();
							out << '\n';
						}
						else if (temp_save->get_obj()->get_name() == 6) // Rectangle +
						{
							out << temp_save->get_obj()->get_width();
							out << '\n';
							out << temp_save->get_obj()->get_height();
							out << '\n';
						}
						out << temp_save->get_obj()->get_picture();
						out << '\n';
						out << '\n';
						temp_save = temp_save->get_next();
					}
					out.close();
					cout << "Save complited" << endl;
					system("pause");
					break;
				}
				case '2': // Voluminous 
				{
					{
						ofstream out;
						out.open("Voluminous.txt", ios_base::trunc);
						Keeper* temp_save = voluminous_start;

						while (temp_save != 0)
						{
							out << temp_save->get_obj()->get_name();
							out << '\n';
							out << temp_save->get_obj()->get_ploshad();
							out << '\n';
							if (temp_save->get_obj()->get_name() == 1) // Sphere +
							{
								out << temp_save->get_obj()->get_radius();
								out << '\n';
							}
							else if (temp_save->get_obj()->get_name() == 2) // Pyramide +
							{
								out << temp_save->get_obj()->get_base();
								out << '\n';
								out << temp_save->get_obj()->get_height();
								out << '\n';
							}
							else if (temp_save->get_obj()->get_name() == 3) // Cylinder +
							{
								out << temp_save->get_obj()->get_base();
								out << '\n';
								out << temp_save->get_obj()->get_height();
								out << '\n';
							}
							else if (temp_save->get_obj()->get_name() == 4) // Kube +
							{
								out << temp_save->get_obj()->get_side();
								out << '\n';
							}
							else if (temp_save->get_obj()->get_name() == 5) // Cone +
							{
								out << temp_save->get_obj()->get_base();
								out << '\n';
								out << temp_save->get_obj()->get_height();
								out << '\n';
							}
							out << temp_save->get_obj()->get_picture();
							out << '\n';
							out << '\n';
							temp_save = temp_save->get_next();
						}
						out.close();
						cout << "Save complited" << endl;
						system("pause");
						break;
					}

					break;
				}
				case '3': // Exit+
				{
					save_exit = 1;
					break;
				}
				default: // Wrong +
				{
					cout << "Wrong enter" << endl;
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '5': // Load
		{
			char load_choise = 0; // ���������� ��� switch ���������� ��������
			int load_exit = 0; // ���� ������ ���� ���������� �������

			while (load_exit != 1)
			{
				load_choise = 0;
				system("cls");
				cout << "What should be loaded?" << endl;
				show_menu(2);

				cin >> load_choise;

				switch (load_choise)
				{
				case '1': // Flat +
				{
					if (flat_start != 0) // �������� �� ������� ������
					{
						Keeper* temp_end = flat_start;

						while (temp_end != 0) // ������� ������� ���� �� ��������
						{
							flat_start = flat_start->get_next();
							delete temp_end->get_obj();
							delete temp_end;
							temp_end = flat_start;
						}
						flat_finish = 0;
					}

					ifstream in;
					in.open("Flat.txt", ios_base::in);
					float elem;

					while (!in.eof())
					{
						in >> elem; // ���

						if (elem != 0)
						{
							Keeper* new_keeper = new Keeper; // ������ ������� ������ � �����������

							if (flat_start == 0) // �������� �� ������� ������
								flat_start = flat_finish = new_keeper;
							else
							{
								flat_finish->set_next(new_keeper); // ������������� ��������� �� ����� ������
								new_keeper->set_prev(flat_finish); // ������������� ��������� �� ����� ������
								flat_finish = new_keeper; // ������������� ��������� �� ����� ����� ������
							}

							if (elem == 1) // Circle +
							{
								Figure* new_figure = new Circle; // ������ �������
								new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
								new_keeper->get_obj()->set_name(1); // ������������� ��� (������� � ������� ������)
								new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

								in >> elem; // �������
								in >> elem; // �������
								new_keeper->get_obj()->set_radius(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // ��������
								elem = 0;
							}
							else if (elem == 2) // Triangle +
							{
								Figure* new_figure = new Triangle; // ������ �������
								new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
								new_keeper->get_obj()->set_name(2); // ������������� ��� (������� � ������� ������)
								new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

								in >> elem; // �������
								in >> elem; // ���������
								new_keeper->get_obj()->set_base(elem);
								in >> elem; // ����� �������
								new_keeper->get_obj()->set_left(elem);
								in >> elem; // ������ �������
								new_keeper->get_obj()->set_right(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // ��������
								elem = 0;
							}
							else if (elem == 3) // Sqare +
							{
								Figure* new_figure = new Sqare; // ������ �������
								new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
								new_keeper->get_obj()->set_name(3); // ������������� ��� (������� � ������� ������)
								new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

								in >> elem; // �������
								in >> elem; // �������
								new_keeper->get_obj()->set_side(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // ��������
								elem = 0;
							}
							else if (elem == 4) // Trapezioid
							{
								Figure* new_figure = new Trapezioid; // ������ �������
								new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
								new_keeper->get_obj()->set_name(4); // ������������� ��� (������� � ������� ������)
								new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

								in >> elem; // �������
								in >> elem; // ����
								new_keeper->get_obj()->set_top(elem);
								in >> elem; // ���������
								new_keeper->get_obj()->set_base(elem);
								in >> elem; // ����� �������
								new_keeper->get_obj()->set_left(elem);
								in >> elem; // ������ �������
								new_keeper->get_obj()->set_right(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // ��������
								elem = 0;
							}
							else if (elem == 5) // Rhombus +
							{
								Figure* new_figure = new Rhombus; // ������ �������
								new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
								new_keeper->get_obj()->set_name(5); // ������������� ��� (������� � ������� ������)
								new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

								in >> elem; // �������
								in >> elem; // ����
								new_keeper->get_obj()->set_first_diag(elem);
								in >> elem; // ���������
								new_keeper->get_obj()->set_second_diag(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // ��������
								elem = 0;
							}
							else if (elem == 6) // Rectangle +
							{
								Figure* new_figure = new Rectangle; // ������ �������
								new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
								new_keeper->get_obj()->set_name(6); // ������������� ��� (������� � ������� ������)
								new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

								in >> elem; // �������
								in >> elem; // ������
								new_keeper->get_obj()->set_width(elem);
								in >> elem; // ������
								new_keeper->get_obj()->set_height(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // ��������
								elem = 0;
							}
						}
					}
					in.close();
					cout << "Load compleated" << endl;
					system("pause");
					break;
				}
				case '2': // Voluminous
				{
					{
						if (voluminous_start != 0) // �������� �� ������� ������
						{
							Keeper* temp_end = voluminous_start;

							while (temp_end != 0) // ������� ������� ���� �� ��������
							{
								voluminous_start = voluminous_start->get_next();
								delete temp_end->get_obj();
								delete temp_end;
								temp_end = voluminous_start;
							}
							flat_finish = 0;
						}

						ifstream in;
						in.open("Voluminous.txt", ios_base::in);
						float elem;

						while (!in.eof())
						{
							in >> elem; // ���

							if (elem != 0)
							{
								Keeper* new_keeper = new Keeper; // ������ ������� ������ � �����������

								if (voluminous_start == 0) // �������� �� ������� ������
									voluminous_start = voluminous_finish = new_keeper;
								else
								{
									voluminous_finish->set_next(new_keeper); // ������������� ��������� �� ����� ������
									new_keeper->set_prev(voluminous_finish); // ������������� ��������� �� ����� ������
									voluminous_finish = new_keeper; // ������������� ��������� �� ����� ����� ������
								}

								if (elem == 1) // Sphere +
								{
									Figure* new_figure = new Sphere; // ������ �������
									new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
									new_keeper->get_obj()->set_name(1); // ������������� ��� (������� � ������� ������)
									new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

									in >> elem; // �������
									in >> elem; // �������
									new_keeper->get_obj()->set_radius(elem);
									new_keeper->get_obj()->set_ploshad();
									in >> elem; // ��������
									elem = 0;
								}
								else if (elem == 2) // Pyramid  +
								{
									Figure* new_figure = new Pyramid; // ������ �������
									new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
									new_keeper->get_obj()->set_name(2); // ������������� ��� (������� � ������� ������)
									new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

									in >> elem; // �������
									in >> elem; // ���������
									new_keeper->get_obj()->set_base(elem);
									in >> elem; // ����� �������
									new_keeper->get_obj()->set_height(elem);
									new_keeper->get_obj()->set_ploshad();
									in >> elem; // ��������
									elem = 0;
								}
								else if (elem == 3) // Cylinder +
								{
									Figure* new_figure = new Cylinder; // ������ �������
									new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
									new_keeper->get_obj()->set_name(3); // ������������� ��� (������� � ������� ������)
									new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

									in >> elem; // �������
									in >> elem; // ���������
									new_keeper->get_obj()->set_base(elem);
									in >> elem; // ����� �������
									new_keeper->get_obj()->set_height(elem);
									new_keeper->get_obj()->set_ploshad();
									in >> elem; // ��������
									elem = 0;
								}
								else if (elem == 4) // Kube +
								{
									Figure* new_figure = new Kube; // ������ �������
									new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
									new_keeper->get_obj()->set_name(4); // ������������� ��� (������� � ������� ������)
									new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

									in >> elem; // �������
									in >> elem; // ����
									new_keeper->get_obj()->set_side(elem);
									new_keeper->get_obj()->set_ploshad();
									in >> elem; // ��������
									elem = 0;
								}
								else if (elem == 5) // Rhombus +
								{
									Figure* new_figure = new Cone; // ������ �������
									new_keeper->set_obj(new_figure); // ����������� ��������� ������ � ��������
									new_keeper->get_obj()->set_name(5); // ������������� ��� (������� � ������� ������)
									new_keeper->get_obj()->set_picture(); // ������������� �������� (������� � ������� ������)

									in >> elem; // �������
									in >> elem; // ���������
									new_keeper->get_obj()->set_base(elem);
									in >> elem; // ����� �������
									new_keeper->get_obj()->set_height(elem);
									new_keeper->get_obj()->set_ploshad();
									in >> elem; // ��������
									elem = 0;
								}
							}
						}
						in.close();
						cout << "Load compleated" << endl;
						system("pause");
						break;
					}

					break;
				}
				case '3': // Exit
				{
					load_exit = 1;
					break;
				}
				default: // Wrong +
				{
					cout << "Wrong enter" << endl;
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '6': // Show +
		{
			char show_choise = 0; // ���������� ��� switch ������ ��������
			int show_exit = 0; // ���� ������ ���� ������ �������

			while (show_exit != 1)
			{
				show_choise = 0;
				system("cls");
				cout << "What should be showed?" << endl;
				show_menu(2);

				cin >> show_choise;

				switch (show_choise)
				{
				case '1': // Flat +
				{
					if (flat_start != 0)
					{
						system("cls");
						int i = 1;
						Keeper* temp_show = flat_start;
						while (temp_show != 0)
						{
							cout << i << endl;
							temp_show->get_obj()->show();
							cout << endl;
							++i;
							temp_show = temp_show->get_next();
						}
					}
					else
						cout << "No elements" << endl;

					system("pause");
					break;
				}
				case '2': // Voluminous +
				{
					if (voluminous_start != 0)
					{
						system("cls");
						int i = 1;
						Keeper* temp_show = voluminous_start;
						while (temp_show != 0)
						{
							cout << i << endl;
							temp_show->get_obj()->show();
							cout << endl;
							++i;
							temp_show = temp_show->get_next();
						}
					}
					else
						cout << "No elements" << endl;
					system("pause");
					break;
				}
				case '3': // Exit +
				{
					show_exit = 1;
					break;
				}
				default: // Wrong +
				{
					cout << "Wrong enter" << endl;
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '7': // Exit +
		{
			global_exit = 1;
			if (flat_start != 0) // �������� �� ������� ������
			{
				Keeper* temp_end = flat_start;

				while (temp_end != 0) // ������� ������� ���� �� ��������
				{
					flat_start = flat_start->get_next();
					delete temp_end->get_obj();
					delete temp_end;
					temp_end = flat_start;
				}
				flat_finish = 0;
			}
			if (voluminous_start != 0) // �������� �� ������� ������
			{
				Keeper* temp_end = voluminous_start;

				while (temp_end != 0) // ������� ������� ���� �� ��������
				{
					voluminous_start = voluminous_start->get_next();
					delete temp_end->get_obj();
					delete temp_end;
					temp_end = voluminous_start;
				}
				flat_finish = 0;
			}
			break;
		}
		default: // Wrong +
		{
			cout << "Wrong enter" << endl;
			system("pause");
			break;
		}
		}
		system("cls");
	}

	return 0;
}