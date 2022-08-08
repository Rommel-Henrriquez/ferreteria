using namespace std;

void MostrarVentasxProducto(Articulo* arrayCategoria, string nombreCategoria) {
  int producto, cantidad = 0;
  cout << nombreCategoria << endl;
  for (int i = 0; i < 4; i++) {
    cout << i + 1 << ". Nombre: " << arrayCategoria[i].nombre << endl;
    cout << "Unidades disponibles: " << arrayCategoria[i].cantidad << endl;
    cout << "Unidades vendidas: " << arrayCategoria[i].cantidadVendida << endl;
    cout << "Precio por unidad: " << arrayCategoria[i].precio << endl;
    cout << "Total vendido de este producto es: "
         << arrayCategoria[i].cantidadVendida * arrayCategoria[i].precio << endl
         << endl;
  }
  cout << endl;
}
void VentasxProducto() {
  int categoria;
  cout << "-------> Categorias <-------" << endl;
  cout << "1.Herramientas." << endl;
  cout << "2.Fontaneria." << endl;
  cout << "3.Construccion." << endl;
  cout << "4.Electricidad." << endl;
  cout << "5.Hogar." << endl;
  cout << "6.Jardineria." << endl;
  cout << "7.Otros." << endl;
  cout << "Que categoria desea consultar?: ";
  cin >> categoria;
  switch (categoria) {
    case 1:
      MostrarVentasxProducto(Herramientas, "Herramientas");
      break;
    case 2:
      MostrarVentasxProducto(Fontaneria, "Fontaneria");
      break;
    case 3:
      MostrarVentasxProducto(Construccion, "Construccion");
      break;
    case 4:
      MostrarVentasxProducto(Electricidad, "Electricidad");
      break;
    case 5:
      MostrarVentasxProducto(Hogar, "Hogar");
      break;
    case 6:
      MostrarVentasxProducto(Jardineria, "Jardineria");
      break;
    case 7:
      MostrarVentasxProducto(Otros, "Otros");
      break;
    default:
      cout << "Opcion invalida :(" << endl;
  }
}
