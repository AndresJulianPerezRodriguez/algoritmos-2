#include <iostream>

using namespace std;

int main() {
  string nombre = ObtenerNombre();
  MostrarInstrucciones();

  int puntajeNivelBasico = 0;
  while (puntajeNivelBasico < 2) {
    puntajeNivelBasico += EvaluarRespuesta(MostrarPregunta("5 [] 7 = 12"));
    puntajeNivelBasico += EvaluarRespuesta(MostrarPregunta("34 [] 4 = 30"));
  }

  int puntajeNivelAvanzado = 0;
  while (puntajeNivelAvanzado < 4) {
    puntajeNivelAvanzado += EvaluarRespuesta(MostrarPregunta("9 [] 0.5 = 3"));
    puntajeNivelAvanzado += EvaluarRespuesta(MostrarPregunta("2 [] 2 = 1"));
  }

  MostrarResultado(nombre, puntajeNivelBasico, puntajeNivelAvanzado);

  return 0;
}
string ObtenerNombre() {
  cout << "Ingrese su nombre: ";
  string nombre;
  cin >> nombre;
  return nombre;
}

void MostrarInstrucciones() {
  cout << "Deberas responder teniendo en cuenta que se responde de esta manera: (x, +, %, -)" << endl;
}

string MostrarPregunta(string pregunta) {
  cout << pregunta << endl;
  string respuesta;
  cin >> respuesta;
  return respuesta;
}

int EvaluarRespuesta(string respuesta) {
  if (respuesta == "+") {
    return 1;
  } else if (respuesta == "-") {
    return 1;
  } else if (respuesta == "x") {
    return 2;
  } else if (respuesta == "%") {
    return 2;
  } else {
    return -1;
  }
}

void MostrarResultado(string nombre, int puntajeNivelBasico, int puntajeNivelAvanzado) {
  cout << "Tenes: " << puntajeNivelBasico + puntajeNivelAvanzado << " puntos" << endl;

  if (puntajeNivelBasico >= 2) {
    cout << "Buena mi fafacho " << nombre << " ya estas en nivel normal" << endl;
  }

  if (puntajeNivelAvanzado >= 4) {
    cout << "Buena mi fafacho " << nombre << " ya estas en nivel hacker" << endl;
  }

  cout << "Ya sabes hacer operaciones basicas, que bien : )";
}

