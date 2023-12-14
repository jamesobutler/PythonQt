#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractbutton.h>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qsurfaceformat.h>
#include <qthread.h>
#include <qwidget.h>
#include <qwidgetaction.h>
#include <qwindow.h>
#include <qwizard.h>



class PythonQtShell_QWidgetAction : public QWidgetAction
{
public:
    PythonQtShell_QWidgetAction(QObject*  parent):QWidgetAction(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWidgetAction() override;

void childEvent(QChildEvent*  event) override;
QWidget*  createWidget(QWidget*  parent) override;
void customEvent(QEvent*  event) override;
void deleteWidget(QWidget*  widget) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWidgetAction : public QWidgetAction
{ public:
inline QWidget*  promoted_createWidget(QWidget*  parent) { return this->createWidget(parent); }
inline QList<QWidget* >  promoted_createdWidgets() const { return this->createdWidgets(); }
inline void promoted_deleteWidget(QWidget*  widget) { this->deleteWidget(widget); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline QWidget*  py_q_createWidget(QWidget*  parent) { return QWidgetAction::createWidget(parent); }
inline void py_q_deleteWidget(QWidget*  widget) { QWidgetAction::deleteWidget(widget); }
inline bool  py_q_event(QEvent*  arg__1) { return QWidgetAction::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWidgetAction::eventFilter(arg__1, arg__2); }
};

class PythonQtWrapper_QWidgetAction : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetAction* new_QWidgetAction(QObject*  parent);
void delete_QWidgetAction(QWidgetAction* obj) { delete obj; }
   QWidget*  createWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   QWidget*  py_q_createWidget(QWidgetAction* theWrappedObject, QWidget*  parent){  return (((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->py_q_createWidget(parent));}
   QList<QWidget* >  createdWidgets(QWidgetAction* theWrappedObject) const;
   QWidget*  defaultWidget(QWidgetAction* theWrappedObject) const;
   void deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   void py_q_deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->py_q_deleteWidget(widget));}
   bool  py_q_event(QWidgetAction* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QWidgetAction* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   void releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   QWidget*  requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   void setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w);
};





class PythonQtShell_QWidgetItem : public QWidgetItem
{
public:
    PythonQtShell_QWidgetItem(QWidget*  w):QWidgetItem(w),_wrapper(nullptr) {};

   ~PythonQtShell_QWidgetItem() override;

QSizePolicy::ControlTypes  controlTypes() const override;
Qt::Orientations  expandingDirections() const override;
QRect  geometry() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void invalidate() override;
bool  isEmpty() const override;
QLayout*  layout() override;
QSize  maximumSize() const override;
int  minimumHeightForWidth(int  arg__1) const override;
QSize  minimumSize() const override;
void setGeometry(const QRect&  arg__1) override;
QSize  sizeHint() const override;
QSpacerItem*  spacerItem() override;
QWidget*  widget() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWidgetItem : public QWidgetItem
{ public:
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QWidgetItem::controlTypes(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QWidgetItem::expandingDirections(); }
inline QRect  py_q_geometry() const { return QWidgetItem::geometry(); }
inline bool  py_q_hasHeightForWidth() const { return QWidgetItem::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QWidgetItem::heightForWidth(arg__1); }
inline bool  py_q_isEmpty() const { return QWidgetItem::isEmpty(); }
inline QSize  py_q_maximumSize() const { return QWidgetItem::maximumSize(); }
inline int  py_q_minimumHeightForWidth(int  arg__1) const { return QWidgetItem::minimumHeightForWidth(arg__1); }
inline QSize  py_q_minimumSize() const { return QWidgetItem::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QWidgetItem::setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return QWidgetItem::sizeHint(); }
inline QWidget*  py_q_widget() const { return QWidgetItem::widget(); }
};

class PythonQtWrapper_QWidgetItem : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetItem* new_QWidgetItem(QWidget*  w);
void delete_QWidgetItem(QWidgetItem* obj) { delete obj; }
   QSizePolicy::ControlTypes  py_q_controlTypes(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_controlTypes());}
   Qt::Orientations  py_q_expandingDirections(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  py_q_geometry(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_geometry());}
   bool  py_q_hasHeightForWidth(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  py_q_heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   bool  py_q_isEmpty(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_isEmpty());}
   QSize  py_q_maximumSize(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_maximumSize());}
   int  py_q_minimumHeightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_minimumHeightForWidth(arg__1));}
   QSize  py_q_minimumSize(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_minimumSize());}
   void py_q_setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_setGeometry(arg__1));}
   QSize  py_q_sizeHint(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_sizeHint());}
   QWidget*  py_q_widget(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_widget());}
    bool __nonzero__(QWidgetItem* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QWindow : public QWindow
{
public:
    PythonQtShell_QWindow(QScreen*  screen = nullptr):QWindow(screen),_wrapper(nullptr) {};
    PythonQtShell_QWindow(QWindow*  parent):QWindow(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWindow() override;

void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void exposeEvent(QExposeEvent*  arg__1) override;
void focusInEvent(QFocusEvent*  arg__1) override;
QObject*  focusObject() const override;
void focusOutEvent(QFocusEvent*  arg__1) override;
QSurfaceFormat  format() const override;
void hideEvent(QHideEvent*  arg__1) override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  arg__1) override;
void mouseDoubleClickEvent(QMouseEvent*  arg__1) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  arg__1) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
void paintEvent(QPaintEvent*  arg__1) override;
void resizeEvent(QResizeEvent*  arg__1) override;
void showEvent(QShowEvent*  arg__1) override;
QSize  size() const override;
QSurface::SurfaceType  surfaceType() const override;
void tabletEvent(QTabletEvent*  arg__1) override;
void timerEvent(QTimerEvent*  event) override;
void touchEvent(QTouchEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWindow : public QWindow
{ public:
inline void promoted_closeEvent(QCloseEvent*  arg__1) { this->closeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_exposeEvent(QExposeEvent*  arg__1) { this->exposeEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { this->focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { this->keyReleaseEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { this->mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { this->moveEvent(arg__1); }
inline bool  promoted_nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) { return this->nativeEvent(eventType, message, result); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void*  promoted_resolveInterface(const char*  name, int  revision) const { return this->resolveInterface(name, revision); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_tabletEvent(QTabletEvent*  arg__1) { this->tabletEvent(arg__1); }
inline void promoted_touchEvent(QTouchEvent*  arg__1) { this->touchEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { this->wheelEvent(arg__1); }
inline void py_q_closeEvent(QCloseEvent*  arg__1) { QWindow::closeEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QWindow::event(arg__1); }
inline void py_q_exposeEvent(QExposeEvent*  arg__1) { QWindow::exposeEvent(arg__1); }
inline void py_q_focusInEvent(QFocusEvent*  arg__1) { QWindow::focusInEvent(arg__1); }
inline QObject*  py_q_focusObject() const { return QWindow::focusObject(); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QWindow::focusOutEvent(arg__1); }
inline QSurfaceFormat  py_q_format() const { return QWindow::format(); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QWindow::hideEvent(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QWindow::keyPressEvent(arg__1); }
inline void py_q_keyReleaseEvent(QKeyEvent*  arg__1) { QWindow::keyReleaseEvent(arg__1); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWindow::mouseDoubleClickEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QWindow::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QWindow::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QWindow::mouseReleaseEvent(arg__1); }
inline void py_q_moveEvent(QMoveEvent*  arg__1) { QWindow::moveEvent(arg__1); }
inline bool  py_q_nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) { return QWindow::nativeEvent(eventType, message, result); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QWindow::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QWindow::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QWindow::showEvent(arg__1); }
inline QSize  py_q_size() const { return QWindow::size(); }
inline QSurface::SurfaceType  py_q_surfaceType() const { return QWindow::surfaceType(); }
inline void py_q_tabletEvent(QTabletEvent*  arg__1) { QWindow::tabletEvent(arg__1); }
inline void py_q_touchEvent(QTouchEvent*  arg__1) { QWindow::touchEvent(arg__1); }
inline void py_q_wheelEvent(QWheelEvent*  arg__1) { QWindow::wheelEvent(arg__1); }
};

class PythonQtWrapper_QWindow : public QObject
{ Q_OBJECT
public:
public slots:
QWindow* new_QWindow(QScreen*  screen = nullptr);
QWindow* new_QWindow(QWindow*  parent);
void delete_QWindow(QWindow* obj) { delete obj; }
   QSize  baseSize(QWindow* theWrappedObject) const;
   void closeEvent(QWindow* theWrappedObject, QCloseEvent*  arg__1);
   void py_q_closeEvent(QWindow* theWrappedObject, QCloseEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_closeEvent(arg__1));}
   Qt::ScreenOrientation  contentOrientation(QWindow* theWrappedObject) const;
   void create(QWindow* theWrappedObject);
   QCursor  cursor(QWindow* theWrappedObject) const;
   void destroy(QWindow* theWrappedObject);
   qreal  devicePixelRatio(QWindow* theWrappedObject) const;
   bool  py_q_event(QWindow* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_event(arg__1));}
   void exposeEvent(QWindow* theWrappedObject, QExposeEvent*  arg__1);
   void py_q_exposeEvent(QWindow* theWrappedObject, QExposeEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_exposeEvent(arg__1));}
   QString  filePath(QWindow* theWrappedObject) const;
   Qt::WindowFlags  flags(QWindow* theWrappedObject) const;
   void focusInEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1);
   void py_q_focusInEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_focusInEvent(arg__1));}
   QObject*  focusObject(QWindow* theWrappedObject) const;
   QObject*  py_q_focusObject(QWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_focusObject());}
   void focusOutEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1);
   void py_q_focusOutEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   QSurfaceFormat  py_q_format(QWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_format());}
   QRect  frameGeometry(QWindow* theWrappedObject) const;
   QMargins  frameMargins(QWindow* theWrappedObject) const;
   QPoint  framePosition(QWindow* theWrappedObject) const;
   QWindow*  static_QWindow_fromWinId(WId  id);
   QRect  geometry(QWindow* theWrappedObject) const;
   int  height(QWindow* theWrappedObject) const;
   void hideEvent(QWindow* theWrappedObject, QHideEvent*  arg__1);
   void py_q_hideEvent(QWindow* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_hideEvent(arg__1));}
   QIcon  icon(QWindow* theWrappedObject) const;
   bool  isActive(QWindow* theWrappedObject) const;
   bool  isAncestorOf(QWindow* theWrappedObject, const QWindow*  child, QWindow::AncestorMode  mode = QWindow::IncludeTransients) const;
   bool  isExposed(QWindow* theWrappedObject) const;
   bool  isModal(QWindow* theWrappedObject) const;
   bool  isTopLevel(QWindow* theWrappedObject) const;
   bool  isVisible(QWindow* theWrappedObject) const;
   void keyPressEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1);
   void py_q_keyPressEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void keyReleaseEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1);
   void py_q_keyReleaseEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_keyReleaseEvent(arg__1));}
   QPoint  mapFromGlobal(QWindow* theWrappedObject, const QPoint&  pos) const;
   QPointF  mapFromGlobal(QWindow* theWrappedObject, const QPointF&  pos) const;
   QPoint  mapToGlobal(QWindow* theWrappedObject, const QPoint&  pos) const;
   QPointF  mapToGlobal(QWindow* theWrappedObject, const QPointF&  pos) const;
   QRegion  mask(QWindow* theWrappedObject) const;
   int  maximumHeight(QWindow* theWrappedObject) const;
   QSize  maximumSize(QWindow* theWrappedObject) const;
   int  maximumWidth(QWindow* theWrappedObject) const;
   int  minimumHeight(QWindow* theWrappedObject) const;
   QSize  minimumSize(QWindow* theWrappedObject) const;
   int  minimumWidth(QWindow* theWrappedObject) const;
   Qt::WindowModality  modality(QWindow* theWrappedObject) const;
   void mouseDoubleClickEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void py_q_mouseDoubleClickEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_mouseDoubleClickEvent(arg__1));}
   void mouseMoveEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void py_q_mouseMoveEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void mousePressEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void py_q_mousePressEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void mouseReleaseEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void py_q_mouseReleaseEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void moveEvent(QWindow* theWrappedObject, QMoveEvent*  arg__1);
   void py_q_moveEvent(QWindow* theWrappedObject, QMoveEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_moveEvent(arg__1));}
   bool  nativeEvent(QWindow* theWrappedObject, const QByteArray&  eventType, void*  message, qintptr*  result);
   bool  py_q_nativeEvent(QWindow* theWrappedObject, const QByteArray&  eventType, void*  message, qintptr*  result){  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_nativeEvent(eventType, message, result));}
   qreal  opacity(QWindow* theWrappedObject) const;
   void paintEvent(QWindow* theWrappedObject, QPaintEvent*  arg__1);
   void py_q_paintEvent(QWindow* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QWindow*  parent(QWindow* theWrappedObject, QWindow::AncestorMode  mode = QWindow::ExcludeTransients) const;
   QPoint  position(QWindow* theWrappedObject) const;
   void reportContentOrientationChange(QWindow* theWrappedObject, Qt::ScreenOrientation  orientation);
   QSurfaceFormat  requestedFormat(QWindow* theWrappedObject) const;
   void resize(QWindow* theWrappedObject, const QSize&  newSize);
   void resize(QWindow* theWrappedObject, int  w, int  h);
   void resizeEvent(QWindow* theWrappedObject, QResizeEvent*  arg__1);
   void py_q_resizeEvent(QWindow* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void*  resolveInterface(QWindow* theWrappedObject, const char*  name, int  revision) const;
   QScreen*  screen(QWindow* theWrappedObject) const;
   void setBaseSize(QWindow* theWrappedObject, const QSize&  size);
   void setCursor(QWindow* theWrappedObject, const QCursor&  arg__1);
   void setFilePath(QWindow* theWrappedObject, const QString&  filePath);
   void setFlag(QWindow* theWrappedObject, Qt::WindowType  arg__1, bool  on = true);
   void setFlags(QWindow* theWrappedObject, Qt::WindowFlags  flags);
   void setFormat(QWindow* theWrappedObject, const QSurfaceFormat&  format);
   void setFramePosition(QWindow* theWrappedObject, const QPoint&  point);
   void setIcon(QWindow* theWrappedObject, const QIcon&  icon);
   bool  setKeyboardGrabEnabled(QWindow* theWrappedObject, bool  grab);
   void setMask(QWindow* theWrappedObject, const QRegion&  region);
   void setMaximumSize(QWindow* theWrappedObject, const QSize&  size);
   void setMinimumSize(QWindow* theWrappedObject, const QSize&  size);
   void setModality(QWindow* theWrappedObject, Qt::WindowModality  modality);
   bool  setMouseGrabEnabled(QWindow* theWrappedObject, bool  grab);
   void setOpacity(QWindow* theWrappedObject, qreal  level);
   void setParent(QWindow* theWrappedObject, QWindow*  parent);
   void setPosition(QWindow* theWrappedObject, const QPoint&  pt);
   void setPosition(QWindow* theWrappedObject, int  posx, int  posy);
   void setScreen(QWindow* theWrappedObject, QScreen*  screen);
   void setSizeIncrement(QWindow* theWrappedObject, const QSize&  size);
   void setSurfaceType(QWindow* theWrappedObject, QSurface::SurfaceType  surfaceType);
   void setTransientParent(QWindow* theWrappedObject, QWindow*  parent);
   void setVisibility(QWindow* theWrappedObject, QWindow::Visibility  v);
   void setWindowState(QWindow* theWrappedObject, Qt::WindowState  state);
   void setWindowStates(QWindow* theWrappedObject, Qt::WindowStates  states);
   void showEvent(QWindow* theWrappedObject, QShowEvent*  arg__1);
   void py_q_showEvent(QWindow* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  py_q_size(QWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_size());}
   QSize  sizeIncrement(QWindow* theWrappedObject) const;
   QSurface::SurfaceType  py_q_surfaceType(QWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_surfaceType());}
   void tabletEvent(QWindow* theWrappedObject, QTabletEvent*  arg__1);
   void py_q_tabletEvent(QWindow* theWrappedObject, QTabletEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_tabletEvent(arg__1));}
   QString  title(QWindow* theWrappedObject) const;
   void touchEvent(QWindow* theWrappedObject, QTouchEvent*  arg__1);
   void py_q_touchEvent(QWindow* theWrappedObject, QTouchEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_touchEvent(arg__1));}
   QWindow*  transientParent(QWindow* theWrappedObject) const;
   Qt::WindowType  type(QWindow* theWrappedObject) const;
   void unsetCursor(QWindow* theWrappedObject);
   QWindow::Visibility  visibility(QWindow* theWrappedObject) const;
   void wheelEvent(QWindow* theWrappedObject, QWheelEvent*  arg__1);
   void py_q_wheelEvent(QWindow* theWrappedObject, QWheelEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_wheelEvent(arg__1));}
   int  width(QWindow* theWrappedObject) const;
   WId  winId(QWindow* theWrappedObject) const;
   Qt::WindowState  windowState(QWindow* theWrappedObject) const;
   Qt::WindowStates  windowStates(QWindow* theWrappedObject) const;
   int  x(QWindow* theWrappedObject) const;
   int  y(QWindow* theWrappedObject) const;
    QString py_toString(QWindow*);
};





class PythonQtShell_QWindowStateChangeEvent : public QWindowStateChangeEvent
{
public:
    PythonQtShell_QWindowStateChangeEvent(Qt::WindowStates  oldState, bool  isOverride = false):QWindowStateChangeEvent(oldState, isOverride),_wrapper(nullptr) {};
    PythonQtShell_QWindowStateChangeEvent(const QWindowStateChangeEvent&  arg__1):QWindowStateChangeEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QWindowStateChangeEvent() override;

QWindowStateChangeEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWindowStateChangeEvent : public QWindowStateChangeEvent
{ public:
inline QWindowStateChangeEvent&  promoted_operator_assign(const QWindowStateChangeEvent&  other) { return this->QWindowStateChangeEvent::operator=(other); }
inline QWindowStateChangeEvent*  py_q_clone() const { return QWindowStateChangeEvent::clone(); }
};

class PythonQtWrapper_QWindowStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  oldState, bool  isOverride = false);
QWindowStateChangeEvent* new_QWindowStateChangeEvent(const QWindowStateChangeEvent&  arg__1);
void delete_QWindowStateChangeEvent(QWindowStateChangeEvent* obj) { delete obj; }
   QWindowStateChangeEvent*  py_q_clone(QWindowStateChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWindowStateChangeEvent*)theWrappedObject)->py_q_clone());}
   bool  isOverride(QWindowStateChangeEvent* theWrappedObject) const;
   Qt::WindowStates  oldState(QWindowStateChangeEvent* theWrappedObject) const;
   QWindowStateChangeEvent*  operator_assign(QWindowStateChangeEvent* theWrappedObject, const QWindowStateChangeEvent&  other);
};





class PythonQtShell_QWizard : public QWizard
{
public:
    PythonQtShell_QWizard(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QWizard(parent, flags),_wrapper(nullptr) {};

   ~PythonQtShell_QWizard() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void cleanupPage(int  id) override;
void closeEvent(QCloseEvent*  arg__1) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void done(int  result) override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
int  exec() override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initializePage(int  id) override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
int  nextId() const override;
void open() override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reject() override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
bool  validateCurrentPage() override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWizard : public QWizard
{ public:
inline void promoted_cleanupPage(int  id) { this->cleanupPage(id); }
inline void promoted_done(int  result) { this->done(result); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_initializePage(int  id) { this->initializePage(id); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void py_q_cleanupPage(int  id) { QWizard::cleanupPage(id); }
inline void py_q_done(int  result) { QWizard::done(result); }
inline bool  py_q_event(QEvent*  event) { return QWizard::event(event); }
inline void py_q_initializePage(int  id) { QWizard::initializePage(id); }
inline int  py_q_nextId() const { return QWizard::nextId(); }
inline void py_q_paintEvent(QPaintEvent*  event) { QWizard::paintEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QWizard::resizeEvent(event); }
inline void py_q_setVisible(bool  visible) { QWizard::setVisible(visible); }
inline QSize  py_q_sizeHint() const { return QWizard::sizeHint(); }
inline bool  py_q_validateCurrentPage() { return QWizard::validateCurrentPage(); }
};

class PythonQtWrapper_QWizard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WizardButton WizardOption WizardPixmap )
Q_FLAGS(WizardOptions )
enum WizardButton{
  BackButton = QWizard::BackButton,   NextButton = QWizard::NextButton,   CommitButton = QWizard::CommitButton,   FinishButton = QWizard::FinishButton,   CancelButton = QWizard::CancelButton,   HelpButton = QWizard::HelpButton,   CustomButton1 = QWizard::CustomButton1,   CustomButton2 = QWizard::CustomButton2,   CustomButton3 = QWizard::CustomButton3,   Stretch = QWizard::Stretch,   NoButton = QWizard::NoButton,   NStandardButtons = QWizard::NStandardButtons,   NButtons = QWizard::NButtons};
enum WizardOption{
  IndependentPages = QWizard::IndependentPages,   IgnoreSubTitles = QWizard::IgnoreSubTitles,   ExtendedWatermarkPixmap = QWizard::ExtendedWatermarkPixmap,   NoDefaultButton = QWizard::NoDefaultButton,   NoBackButtonOnStartPage = QWizard::NoBackButtonOnStartPage,   NoBackButtonOnLastPage = QWizard::NoBackButtonOnLastPage,   DisabledBackButtonOnLastPage = QWizard::DisabledBackButtonOnLastPage,   HaveNextButtonOnLastPage = QWizard::HaveNextButtonOnLastPage,   HaveFinishButtonOnEarlyPages = QWizard::HaveFinishButtonOnEarlyPages,   NoCancelButton = QWizard::NoCancelButton,   CancelButtonOnLeft = QWizard::CancelButtonOnLeft,   HaveHelpButton = QWizard::HaveHelpButton,   HelpButtonOnRight = QWizard::HelpButtonOnRight,   HaveCustomButton1 = QWizard::HaveCustomButton1,   HaveCustomButton2 = QWizard::HaveCustomButton2,   HaveCustomButton3 = QWizard::HaveCustomButton3,   NoCancelButtonOnLastPage = QWizard::NoCancelButtonOnLastPage};
enum WizardPixmap{
  WatermarkPixmap = QWizard::WatermarkPixmap,   LogoPixmap = QWizard::LogoPixmap,   BannerPixmap = QWizard::BannerPixmap,   BackgroundPixmap = QWizard::BackgroundPixmap,   NPixmaps = QWizard::NPixmaps};
Q_DECLARE_FLAGS(WizardOptions, WizardOption)
public slots:
QWizard* new_QWizard(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QWizard(QWizard* obj) { delete obj; }
   int  addPage(QWizard* theWrappedObject, PythonQtPassOwnershipToCPP<QWizardPage* >  page);
   QAbstractButton*  button(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   QString  buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   void cleanupPage(QWizard* theWrappedObject, int  id);
   void py_q_cleanupPage(QWizard* theWrappedObject, int  id){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_cleanupPage(id));}
   int  currentId(QWizard* theWrappedObject) const;
   QWizardPage*  currentPage(QWizard* theWrappedObject) const;
   void py_q_done(QWizard* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_done(result));}
   bool  py_q_event(QWizard* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_event(event));}
   QVariant  field(QWizard* theWrappedObject, const QString&  name) const;
   bool  hasVisitedPage(QWizard* theWrappedObject, int  id) const;
   void initializePage(QWizard* theWrappedObject, int  id);
   void py_q_initializePage(QWizard* theWrappedObject, int  id){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_initializePage(id));}
   int  nextId(QWizard* theWrappedObject) const;
   int  py_q_nextId(QWizard* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_nextId());}
   QWizard::WizardOptions  options(QWizard* theWrappedObject) const;
   QWizardPage*  page(QWizard* theWrappedObject, int  id) const;
   QList<int >  pageIds(QWizard* theWrappedObject) const;
   void py_q_paintEvent(QWizard* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_paintEvent(event));}
   QPixmap  pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const;
   void removePage(QWizard* theWrappedObject, int  id);
   void py_q_resizeEvent(QWizard* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_resizeEvent(event));}
   void setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, PythonQtPassOwnershipToCPP<QAbstractButton* >  button);
   void setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout);
   void setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value);
   void setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on = true);
   void setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options);
   void setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page);
   void setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setSideWidget(QWizard* theWrappedObject, QWidget*  widget);
   void setStartId(QWizard* theWrappedObject, int  id);
   void setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void py_q_setVisible(QWizard* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_setVisible(visible));}
   void setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style);
   QWidget*  sideWidget(QWizard* theWrappedObject) const;
   QSize  py_q_sizeHint(QWizard* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_sizeHint());}
   int  startId(QWizard* theWrappedObject) const;
   Qt::TextFormat  subTitleFormat(QWizard* theWrappedObject) const;
   bool  testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const;
   Qt::TextFormat  titleFormat(QWizard* theWrappedObject) const;
   bool  validateCurrentPage(QWizard* theWrappedObject);
   bool  py_q_validateCurrentPage(QWizard* theWrappedObject){  return (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_validateCurrentPage());}
   QList<int >  visitedIds(QWizard* theWrappedObject) const;
   QWizard::WizardStyle  wizardStyle(QWizard* theWrappedObject) const;
};





class PythonQtShell_QWizardPage : public QWizardPage
{
public:
    PythonQtShell_QWizardPage(QWidget*  parent = nullptr):QWizardPage(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWizardPage() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void cleanupPage() override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initializePage() override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
bool  isComplete() const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
int  nextId() const override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
bool  validatePage() override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWizardPage : public QWizardPage
{ public:
inline QVariant  promoted_field(const QString&  name) const { return this->field(name); }
inline void promoted_registerField(const QString&  name, QWidget*  widget, const char*  property = nullptr, const char*  changedSignal = nullptr) { this->registerField(name, widget, property, changedSignal); }
inline void promoted_setField(const QString&  name, const QVariant&  value) { this->setField(name, value); }
inline QWizard*  promoted_wizard() const { return this->wizard(); }
inline void py_q_cleanupPage() { QWizardPage::cleanupPage(); }
inline void py_q_initializePage() { QWizardPage::initializePage(); }
inline bool  py_q_isComplete() const { return QWizardPage::isComplete(); }
inline int  py_q_nextId() const { return QWizardPage::nextId(); }
inline bool  py_q_validatePage() { return QWizardPage::validatePage(); }
};

class PythonQtWrapper_QWizardPage : public QObject
{ Q_OBJECT
public:
public slots:
QWizardPage* new_QWizardPage(QWidget*  parent = nullptr);
void delete_QWizardPage(QWizardPage* obj) { delete obj; }
   QString  buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const;
   void cleanupPage(QWizardPage* theWrappedObject);
   void py_q_cleanupPage(QWizardPage* theWrappedObject){  (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_cleanupPage());}
   QVariant  field(QWizardPage* theWrappedObject, const QString&  name) const;
   void initializePage(QWizardPage* theWrappedObject);
   void py_q_initializePage(QWizardPage* theWrappedObject){  (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_initializePage());}
   bool  isCommitPage(QWizardPage* theWrappedObject) const;
   bool  isComplete(QWizardPage* theWrappedObject) const;
   bool  py_q_isComplete(QWizardPage* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_isComplete());}
   bool  isFinalPage(QWizardPage* theWrappedObject) const;
   int  nextId(QWizardPage* theWrappedObject) const;
   int  py_q_nextId(QWizardPage* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_nextId());}
   QPixmap  pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const;
   void registerField(QWizardPage* theWrappedObject, const QString&  name, QWidget*  widget, const char*  property = nullptr, const char*  changedSignal = nullptr);
   void setButtonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setCommitPage(QWizardPage* theWrappedObject, bool  commitPage);
   void setField(QWizardPage* theWrappedObject, const QString&  name, const QVariant&  value);
   void setFinalPage(QWizardPage* theWrappedObject, bool  finalPage);
   void setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle);
   void setTitle(QWizardPage* theWrappedObject, const QString&  title);
   QString  subTitle(QWizardPage* theWrappedObject) const;
   QString  title(QWizardPage* theWrappedObject) const;
   bool  validatePage(QWizardPage* theWrappedObject);
   bool  py_q_validatePage(QWizardPage* theWrappedObject){  return (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_validatePage());}
   QWizard*  wizard(QWizardPage* theWrappedObject) const;
};


