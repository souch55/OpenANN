#ifndef DOUBLEPOLEBALANCINGVISUALIZATION_H
#define DOUBLEPOLEBALANCINGVISUALIZATION_H

#include <QGLWidget>

class DoublePoleBalancingVisualization : public QGLWidget
{
  Q_OBJECT
  int width, height;
  bool singlePole, fullyObservable, alphaBetaFilter;
  double position, angle1, angle2, force;
  int pause;

public:
  DoublePoleBalancingVisualization(bool singlePole, bool fullyObservable,
      bool alphaBetaFilter, QWidget* parent = 0,
      const QGLWidget* shareWidget = 0, Qt::WindowFlags f = 0);

protected:
  virtual void initializeGL();
  virtual void resizeGL(int width, int height);
  virtual void paintGL();
  virtual void keyPressEvent(QKeyEvent* keyEvent);
  void run();
};

#endif // DOUBLEPOLEBALANCINGVISUALIZATION_H