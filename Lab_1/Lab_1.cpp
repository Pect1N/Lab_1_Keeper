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
	Keeper* flat_start = 0; // указатель на начало списка плоских фигур
	Keeper* flat_finish = 0; // указатель на конец списка плоских фигур
	Keeper* voluminous_start = 0; // указатель на начало списка объёмных фигур
	Keeper* voluminous_finish = 0; // указатель на конец списка объёмных фигур
	char global_choise = 0; // переменная для глобального switch
	int global_exit = 0; // переменная для глобального меню

	while (global_exit != 1)
	{
		global_choise = 0;

		show_menu(1);

		cin >> global_choise;

		switch (global_choise)
		{
		case '1': // Create
		{
			char creation_choise = 0; // переменная для switch создания элемента
			int creation_exit = 0; // флаг выхода меню создания объекта

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
					int flat_exit = 0; // флаг выхода меню плоских фигур
					char flat_choise = 0; // переменная для switch выбора фигуры
					float razmer = 0;

					while (flat_exit != 1)
					{
						flat_choise = 0;
						razmer = 0;
						Keeper* temp_keeper = new Keeper; // создаём элемент списка с указателями
						system("cls");

						show_menu(3);

						cin >> flat_choise;

						if (flat_choise != '7')
						{
							if (flat_start == 0) // проверка на пустоту списка
								flat_start = flat_finish = temp_keeper;
							else
							{
								flat_finish->set_next(temp_keeper); // устанавливаем указатель на новый объект
								temp_keeper->set_prev(flat_finish); // устанавливаем указатель на конец списка
								flat_finish = temp_keeper; // перестраиваем указатель на новый конец списка
							}
						}

						switch (flat_choise)
						{
						case '1': // Circle +
						{
							Figure* temp_figure = new Circle; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(1); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter circle radius" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_radius(razmer); // установка стороны

							temp_keeper->get_obj()->set_ploshad(); // вычисление площади
							break;
						}
						case '2': // Triangle +
						{
							Figure* temp_figure = new Triangle; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(2); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter triangle base" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_base(razmer); // установка стороны

							cout << "Enter triangle left side" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_left(razmer); // установка стороны

							cout << "Enter triangle right side" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_right(razmer); // установка стороны

							temp_keeper->get_obj()->set_ploshad(); // вычисление площади
							break;
						}
						case '3': // Sqare +
						{
							Figure* temp_figure = new Sqare; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(3); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter sqare side" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_side(razmer); // установка стороны

							temp_keeper->get_obj()->set_ploshad(); // вычисление площади
							break;
						}
						case '4': // Trapezioid +
						{
							Figure* temp_figure = new Trapezioid; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(4); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter trapezioid top" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_top(razmer); // установка стороны

							cout << "Enter trapezioid base" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_base(razmer); // установка стороны

							cout << "Enter trapezioid left" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_left(razmer); // установка стороны

							cout << "Enter trapezioid right" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_right(razmer); // установка стороны

							temp_keeper->get_obj()->set_ploshad(); // вычисление площади
							break;
						}
						case '5': // Rhombus +
						{
							Figure* temp_figure = new Rhombus; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(5); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter rhombus first" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_first_diag(razmer); // установка стороны

							cout << "Enter rhombus second" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_second_diag(razmer); // установка стороны

							temp_keeper->get_obj()->set_ploshad(); // вычисление площади
							break;
						}
						case '6': // Rectangle +
						{
							Figure* temp_figure = new Rectangle; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(6); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter rectangle width" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_width(razmer); // установка ширины
							cout << "Enter rectangle height" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_height(razmer); // установка высоты
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
					int voluminous_exit = 0; // флаг выхода меню плоских фигур
					char voluminous_choise = 0; // переменная для switch выбора фигуры
					float razmer = 0;

					while (voluminous_exit != 1)
					{
						voluminous_choise = 0;
						razmer = 0;
						Keeper* temp_keeper = new Keeper; // создаём элемент списка с указателями
						system("cls");

						show_menu(4);

						cin >> voluminous_choise;

						if (voluminous_choise != '6')
						{
							if (voluminous_start == 0) // проверка на пустоту списка
								voluminous_start = voluminous_finish = temp_keeper;
							else
							{
								voluminous_finish->set_next(temp_keeper); // устанавливаем указатель на новый объект
								temp_keeper->set_prev(voluminous_finish); // устанавливаем указатель на конец списка
								voluminous_finish = temp_keeper; // перестраиваем указатель на новый конец списка
							}
						}

						switch (voluminous_choise)
						{
						case '1': // Sphere +
						{
							Figure* temp_figure = new Sphere; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(1); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter Sphere radius" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_radius(razmer); // установка стороны

							temp_keeper->get_obj()->set_ploshad(); // вычисление площади
							break;
						}
						case '2': // Pyramid +
						{
							Figure* temp_figure = new Pyramid; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(2); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter Pyramid base" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_base(razmer); // установка стороны

							cout << "Enter Pyramid height" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_height(razmer); // установка стороны

							temp_keeper->get_obj()->set_ploshad(); // вычисление площади
							break;
						}
						case '3': // Cylinder +
						{
							Figure* temp_figure = new Cylinder; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(3); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter Cylinder base" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_base(razmer); // установка стороны

							cout << "Enter Cylinder height" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_height(razmer); // установка стороны

							temp_keeper->get_obj()->set_ploshad(); // вычисление площади
							break;
						}
						case '4': // Kube +
						{
							Figure* temp_figure = new Kube; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(4); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter Kube side" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_side(razmer); // установка стороны

							temp_keeper->get_obj()->set_ploshad(); // вычисление площади
							break;
						}
						case '5': // Cone +
						{
							Figure* temp_figure = new Cone; // создаём квадрат

							temp_keeper->set_obj(temp_figure); // присваиваем указатель списка к квадрату
							temp_keeper->get_obj()->set_name(5); // устанавливаем имя (связано с выбором фигуры)
							temp_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

							cout << "Enter Pyramid base" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_base(razmer); // установка стороны

							cout << "Enter Pyramid height" << endl;
							cin >> razmer;
							temp_keeper->get_obj()->set_height(razmer); // установка стороны

							temp_keeper->get_obj()->set_ploshad(); // вычисление площади
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
			char edit_choise = 0; // переменная для switch изменения объекта
			int edit_exit = 0; // флаг выхода из меню изменения объекта

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
					if (flat_start != 0) // проверка на пустоту очереди
					{
						system("cls");
						int i = 1;
						Keeper* temp_show = flat_start;
						while (temp_show != 0)
						{
							cout << i << endl; // вывод номера элемента
							temp_show->get_obj()->show(); // вывод самого элемента
							cout << endl;
							++i;
							temp_show = temp_show->get_next();
						}

						char edit_element_choise = 0;
						int edit_counter = 49;
						Keeper* temp_element = flat_start;
						cout << "Enter number element to edit" << endl;

						cin >> edit_element_choise; // ввод номера изменяемого элемента

						while (edit_counter != edit_element_choise && temp_element != 0) // пока не конец и не найден элемент
						{
							++edit_counter;
							temp_element = temp_element->get_next();
						}
						if (temp_element != 0) // если такой элемент есть
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
						if (voluminous_start != 0) // проверка на пустоту очереди
						{
							system("cls");
							int i = 1;
							Keeper* temp_show = voluminous_start;
							while (temp_show != 0)
							{
								cout << i << endl; // вывод номера элемента
								temp_show->get_obj()->show(); // вывод самого элемента
								cout << endl;
								++i;
								temp_show = temp_show->get_next();
							}

							char edit_element_choise = 0;
							int edit_counter = 49;
							Keeper* temp_element = voluminous_start;
							cout << "Enter number element to edit" << endl;

							cin >> edit_element_choise; // ввод номера изменяемого элемента

							while (edit_counter != edit_element_choise && temp_element != 0) // пока не конец и не найден элемент
							{
								++edit_counter;
								temp_element = temp_element->get_next();
							}
							if (temp_element != 0) // если такой элемент есть
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
			char delete_choise = 0; // переменная для switch удаления элемента
			int delete_exit = 0; // флаг выхода меню удаления объекта

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
					if (flat_start != 0) // проверка на пустоту очереди
					{
						system("cls");
						int i = 1;
						Keeper* temp_show = flat_start;

						while (temp_show != 0)
						{
							cout << i << endl; // вывод номера элемента
							temp_show->get_obj()->show(); // вывод самого элемента
							cout << endl;
							++i;
							temp_show = temp_show->get_next();
						}

						char delete_element_choise = 0;
						int element_counter = 49;
						Keeper* temp_element = flat_start;
						cout << "Enter number element to delete" << endl;

						cin >> delete_element_choise; // ввод номера удаляемого элемента

						while (element_counter != delete_element_choise && temp_element != 0) // пока не конец и не найден элемент
						{
							++element_counter;
							temp_element = temp_element->get_next();
						}
						if (temp_element != 0) // если такой элемент есть
						{
							if (temp_element->get_prev() != 0) // проверка на наличие предыдущего элемента
							{
								if (temp_element->get_next() != 0)
								{
									temp_element->get_prev()->set_next(temp_element->get_next()); // установить для предыдущего элемента следубщий элемент (для предыдущего следующий это для текущего следующий)
									temp_element->get_next()->set_prev(temp_element->get_prev()); // установить для следующего элемента предыдущий элемент (для следующего предыдущий это для текущего предыдущий)
									delete temp_element->get_obj();
									delete temp_element;
								}
								else // нашли правый крайний
								{
									temp_element->get_prev()->set_next(0); // установить для предыдущего элемента следубщий элемент (для предыдущего следующий это для текущего следующий, тоесть 0)
									flat_finish = temp_element->get_prev();
									delete temp_element->get_obj();
									delete temp_element;
								}
							}
							else
							{
								if (temp_element->get_next() != 0) // нашли левый крайний
								{
									temp_element->get_next()->set_prev(0); // установить для следующего элемента предыдущий элемент (для следующего предыдущий это для текущего предыдущий, тоесть 0)
									flat_start = temp_element->get_next();
									delete temp_element->get_obj();
									delete temp_element;
								}
								else // этот элемент единственный
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
						if (voluminous_start != 0) // проверка на пустоту очереди
						{
							system("cls");
							int i = 1;
							Keeper* temp_show = voluminous_start;

							while (temp_show != 0)
							{
								cout << i << endl; // вывод номера элемента
								temp_show->get_obj()->show(); // вывод самого элемента
								cout << endl;
								++i;
								temp_show = temp_show->get_next();
							}

							char delete_element_choise = 0;
							int element_counter = 49;
							Keeper* temp_element = voluminous_start;
							cout << "Enter number element to delete" << endl;

							cin >> delete_element_choise; // ввод номера удаляемого элемента

							while (element_counter != delete_element_choise && temp_element != 0) // пока не конец и не найден элемент
							{
								++element_counter;
								temp_element = temp_element->get_next();
							}
							if (temp_element != 0) // если такой элемент есть
							{
								if (temp_element->get_prev() != 0) // проверка на наличие предыдущего элемента
								{
									if (temp_element->get_next() != 0)
									{
										temp_element->get_prev()->set_next(temp_element->get_next()); // установить для предыдущего элемента следубщий элемент (для предыдущего следующий это для текущего следующий)
										temp_element->get_next()->set_prev(temp_element->get_prev()); // установить для следующего элемента предыдущий элемент (для следующего предыдущий это для текущего предыдущий)
										delete temp_element->get_obj();
										delete temp_element;
									}
									else // нашли правый крайний
									{
										temp_element->get_prev()->set_next(0); // установить для предыдущего элемента следубщий элемент (для предыдущего следующий это для текущего следующий, тоесть 0)
										flat_finish = temp_element->get_prev();
										delete temp_element->get_obj();
										delete temp_element;
									}
								}
								else
								{
									if (temp_element->get_next() != 0) // нашли левый крайний
									{
										temp_element->get_next()->set_prev(0); // установить для следующего элемента предыдущий элемент (для следующего предыдущий это для текущего предыдущий, тоесть 0)
										flat_start = temp_element->get_next();
										delete temp_element->get_obj();
										delete temp_element;
									}
									else // этот элемент единственный
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
			char save_choise = 0; // переменная для switch сохранения элемента
			int save_exit = 0; // флаг выхода меню сохранения объекта

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
			char load_choise = 0; // переменная для switch сохранения элемента
			int load_exit = 0; // флаг выхода меню сохранения объекта

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
					if (flat_start != 0) // проверка на пустоту списка
					{
						Keeper* temp_end = flat_start;

						while (temp_end != 0) // удалять объекты пока не кончатся
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
						in >> elem; // имя

						if (elem != 0)
						{
							Keeper* new_keeper = new Keeper; // создаём элемент списка с указателями

							if (flat_start == 0) // проверка на пустоту списка
								flat_start = flat_finish = new_keeper;
							else
							{
								flat_finish->set_next(new_keeper); // устанавливаем указатель на новый объект
								new_keeper->set_prev(flat_finish); // устанавливаем указатель на конец списка
								flat_finish = new_keeper; // перестраиваем указатель на новый конец списка
							}

							if (elem == 1) // Circle +
							{
								Figure* new_figure = new Circle; // создаём квадрат
								new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
								new_keeper->get_obj()->set_name(1); // устанавливаем имя (связано с выбором фигуры)
								new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

								in >> elem; // площадь
								in >> elem; // сторона
								new_keeper->get_obj()->set_radius(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // картинка
								elem = 0;
							}
							else if (elem == 2) // Triangle +
							{
								Figure* new_figure = new Triangle; // создаём квадрат
								new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
								new_keeper->get_obj()->set_name(2); // устанавливаем имя (связано с выбором фигуры)
								new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

								in >> elem; // площадь
								in >> elem; // основание
								new_keeper->get_obj()->set_base(elem);
								in >> elem; // левая сторона
								new_keeper->get_obj()->set_left(elem);
								in >> elem; // правая сторона
								new_keeper->get_obj()->set_right(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // картинка
								elem = 0;
							}
							else if (elem == 3) // Sqare +
							{
								Figure* new_figure = new Sqare; // создаём квадрат
								new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
								new_keeper->get_obj()->set_name(3); // устанавливаем имя (связано с выбором фигуры)
								new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

								in >> elem; // площадь
								in >> elem; // сторона
								new_keeper->get_obj()->set_side(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // картинка
								elem = 0;
							}
							else if (elem == 4) // Trapezioid
							{
								Figure* new_figure = new Trapezioid; // создаём квадрат
								new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
								new_keeper->get_obj()->set_name(4); // устанавливаем имя (связано с выбором фигуры)
								new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

								in >> elem; // площадь
								in >> elem; // верх
								new_keeper->get_obj()->set_top(elem);
								in >> elem; // основание
								new_keeper->get_obj()->set_base(elem);
								in >> elem; // левая сторона
								new_keeper->get_obj()->set_left(elem);
								in >> elem; // правая сторона
								new_keeper->get_obj()->set_right(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // картинка
								elem = 0;
							}
							else if (elem == 5) // Rhombus +
							{
								Figure* new_figure = new Rhombus; // создаём квадрат
								new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
								new_keeper->get_obj()->set_name(5); // устанавливаем имя (связано с выбором фигуры)
								new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

								in >> elem; // площадь
								in >> elem; // верх
								new_keeper->get_obj()->set_first_diag(elem);
								in >> elem; // основание
								new_keeper->get_obj()->set_second_diag(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // картинка
								elem = 0;
							}
							else if (elem == 6) // Rectangle +
							{
								Figure* new_figure = new Rectangle; // создаём квадрат
								new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
								new_keeper->get_obj()->set_name(6); // устанавливаем имя (связано с выбором фигуры)
								new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

								in >> elem; // площадь
								in >> elem; // ширина
								new_keeper->get_obj()->set_width(elem);
								in >> elem; // высота
								new_keeper->get_obj()->set_height(elem);
								new_keeper->get_obj()->set_ploshad();
								in >> elem; // картинка
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
						if (voluminous_start != 0) // проверка на пустоту списка
						{
							Keeper* temp_end = voluminous_start;

							while (temp_end != 0) // удалять объекты пока не кончатся
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
							in >> elem; // имя

							if (elem != 0)
							{
								Keeper* new_keeper = new Keeper; // создаём элемент списка с указателями

								if (voluminous_start == 0) // проверка на пустоту списка
									voluminous_start = voluminous_finish = new_keeper;
								else
								{
									voluminous_finish->set_next(new_keeper); // устанавливаем указатель на новый объект
									new_keeper->set_prev(voluminous_finish); // устанавливаем указатель на конец списка
									voluminous_finish = new_keeper; // перестраиваем указатель на новый конец списка
								}

								if (elem == 1) // Sphere +
								{
									Figure* new_figure = new Sphere; // создаём квадрат
									new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
									new_keeper->get_obj()->set_name(1); // устанавливаем имя (связано с выбором фигуры)
									new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

									in >> elem; // площадь
									in >> elem; // сторона
									new_keeper->get_obj()->set_radius(elem);
									new_keeper->get_obj()->set_ploshad();
									in >> elem; // картинка
									elem = 0;
								}
								else if (elem == 2) // Pyramid  +
								{
									Figure* new_figure = new Pyramid; // создаём квадрат
									new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
									new_keeper->get_obj()->set_name(2); // устанавливаем имя (связано с выбором фигуры)
									new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

									in >> elem; // площадь
									in >> elem; // основание
									new_keeper->get_obj()->set_base(elem);
									in >> elem; // левая сторона
									new_keeper->get_obj()->set_height(elem);
									new_keeper->get_obj()->set_ploshad();
									in >> elem; // картинка
									elem = 0;
								}
								else if (elem == 3) // Cylinder +
								{
									Figure* new_figure = new Cylinder; // создаём квадрат
									new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
									new_keeper->get_obj()->set_name(3); // устанавливаем имя (связано с выбором фигуры)
									new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

									in >> elem; // площадь
									in >> elem; // основание
									new_keeper->get_obj()->set_base(elem);
									in >> elem; // левая сторона
									new_keeper->get_obj()->set_height(elem);
									new_keeper->get_obj()->set_ploshad();
									in >> elem; // картинка
									elem = 0;
								}
								else if (elem == 4) // Kube +
								{
									Figure* new_figure = new Kube; // создаём квадрат
									new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
									new_keeper->get_obj()->set_name(4); // устанавливаем имя (связано с выбором фигуры)
									new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

									in >> elem; // площадь
									in >> elem; // верх
									new_keeper->get_obj()->set_side(elem);
									new_keeper->get_obj()->set_ploshad();
									in >> elem; // картинка
									elem = 0;
								}
								else if (elem == 5) // Rhombus +
								{
									Figure* new_figure = new Cone; // создаём квадрат
									new_keeper->set_obj(new_figure); // присваиваем указатель списка к квадрату
									new_keeper->get_obj()->set_name(5); // устанавливаем имя (связано с выбором фигуры)
									new_keeper->get_obj()->set_picture(); // устанавливаем картинку (связано с выбором фигуры)

									in >> elem; // площадь
									in >> elem; // основание
									new_keeper->get_obj()->set_base(elem);
									in >> elem; // левая сторона
									new_keeper->get_obj()->set_height(elem);
									new_keeper->get_obj()->set_ploshad();
									in >> elem; // картинка
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
			char show_choise = 0; // переменная для switch показа элемента
			int show_exit = 0; // флаг выхода меню показа объекта

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
			if (flat_start != 0) // проверка на пустоту списка
			{
				Keeper* temp_end = flat_start;

				while (temp_end != 0) // удалять объекты пока не кончатся
				{
					flat_start = flat_start->get_next();
					delete temp_end->get_obj();
					delete temp_end;
					temp_end = flat_start;
				}
				flat_finish = 0;
			}
			if (voluminous_start != 0) // проверка на пустоту списка
			{
				Keeper* temp_end = voluminous_start;

				while (temp_end != 0) // удалять объекты пока не кончатся
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