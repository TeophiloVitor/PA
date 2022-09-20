#ifndef SCULPTOR_H
#define SCULPTOR_H

/**
 * @brief O struct Voxel cria uma entidade em três dimensões.
 */
struct Voxel {
  float r,g,b; // Cores.
  float a; // Transparência.
  bool isOn; // Incluir ou não.
};

class Sculptor {
protected:
  /**
   * @brief v é uma matriz tridimensional, formada a partir de um ponteiro para ponteiro para ponteiro para Voxel.
   */
  Voxel ***v; // Matriz 3D.
  /**
   * @brief nx armazena a quantidadede de elementos na direção x da matriz.
   */
  int nx;
  /**
   * @brief ny armazena a quantidadede de elementos na direção y da matriz.
   */
  int ny;
  /**
   * @brief nz armazena a quantidadede de elementos na direção z da matriz.
   */
  int nz;
  /**
   * @brief r armazena o valor referenete a cor vermelha.
   */
  float r;
  /**
   * @brief g armazena o valor referenete a cor verde.
   */
  float g;
  /**
   * @brief r armazena o valor referenete a cor azul.
   */
  float b;
  /**
   * @brief g armazena o valor referenete a transparência.
   */
  float a;
public:
  /**
   * @brief A função Sculptor aloca uma matriz para o ambiente onde serão esculpidos os objetos.
   */
  Sculptor(int _nx, int _ny, int _nz);
  /**
   * @brief A função ~Sculptor é o destructor da função <b>Sculptor</b>.
   */
  ~Sculptor();
  /**
   * @brief A função setColor atribui as cores ao objeto que será esculpido.
   */
  void setColor(float r, float g, float b, float alpha);
  /**
   * @brief A função putVoxel cria um Voxel no ambiente, na posição definida pelo usuário.
   */
  void putVoxel(int x, int y, int z);
  /**
   * @brief A função cutVoxel remove um Voxel na posição definida pelo usuário.
   */
  void cutVoxel(int x, int y, int z);
  /**
   * @brief A função putBox cria uma entidade de Voxels no formato de uma cubo.
   */
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief A função cutBox remove uma sequência de Voxels no formato de um cubo.
   */
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief A função putSphere cria uma entidade de Voxels no formato de uma esfera.
   */
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief A função cutSphere remove(ou corta) uma sequência de Voxels no formato de uma esfera.
   */
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief Criar uma sequência de Voxels em forma de elipsóide.
   */
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief A função cutEllipsoid remove(ou corta) uma sequência de Voxels no formato de um elipsóide.
   */
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief Criar arquivo para leitura do desenho, contendo as dimensões e as cores utilizando.
   */
  void writeOFF(char* filename);
};
#endif // SCULPTOR_H