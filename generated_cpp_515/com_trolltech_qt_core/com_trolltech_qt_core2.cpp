#include "com_trolltech_qt_core2.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QStringList>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatetime.h>
#include <qeasingcurve.h>
#include <qfileinfo.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qmimetype.h>
#include <qmutex.h>
#include <qobject.h>
#include <qoperatingsystemversion.h>
#include <qpair.h>
#include <qpauseanimation.h>
#include <qprocess.h>
#include <qrandom.h>
#include <qreadwritelock.h>
#include <qregularexpression.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qtextcodec.h>
#include <qthread.h>
#include <qurl.h>
#include <qvector.h>
#include <qwidget.h>

QMimeDatabase* PythonQtWrapper_QMimeDatabase::new_QMimeDatabase()
{ 
return new QMimeDatabase(); }

QList<QMimeType >  PythonQtWrapper_QMimeDatabase::allMimeTypes(QMimeDatabase* theWrappedObject) const
{
  return ( theWrappedObject->allMimeTypes());
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForData(device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForData(data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileInfo, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileName, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const
{
  return ( theWrappedObject->mimeTypeForName(nameOrAlias));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->mimeTypeForUrl(url));
}

QList<QMimeType >  PythonQtWrapper_QMimeDatabase::mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->mimeTypesForFileName(fileName));
}

QString  PythonQtWrapper_QMimeDatabase::suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->suffixForFileName(fileName));
}



QMimeType* PythonQtWrapper_QMimeType::new_QMimeType()
{ 
return new QMimeType(); }

QMimeType* PythonQtWrapper_QMimeType::new_QMimeType(const QMimeType&  other)
{ 
return new QMimeType(other); }

QStringList  PythonQtWrapper_QMimeType::aliases(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->aliases());
}

QStringList  PythonQtWrapper_QMimeType::allAncestors(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->allAncestors());
}

QString  PythonQtWrapper_QMimeType::comment(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->comment());
}

QString  PythonQtWrapper_QMimeType::filterString(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->filterString());
}

QString  PythonQtWrapper_QMimeType::genericIconName(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->genericIconName());
}

QStringList  PythonQtWrapper_QMimeType::globPatterns(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->globPatterns());
}

QString  PythonQtWrapper_QMimeType::iconName(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->iconName());
}

bool  PythonQtWrapper_QMimeType::inherits(QMimeType* theWrappedObject, const QString&  mimeTypeName) const
{
  return ( theWrappedObject->inherits(mimeTypeName));
}

bool  PythonQtWrapper_QMimeType::isDefault(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

bool  PythonQtWrapper_QMimeType::isValid(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QMimeType::name(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QMimeType::__ne__(QMimeType* theWrappedObject, const QMimeType&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QMimeType*  PythonQtWrapper_QMimeType::operator_assign(QMimeType* theWrappedObject, const QMimeType&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QMimeType::__eq__(QMimeType* theWrappedObject, const QMimeType&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringList  PythonQtWrapper_QMimeType::parentMimeTypes(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->parentMimeTypes());
}

QString  PythonQtWrapper_QMimeType::preferredSuffix(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->preferredSuffix());
}

QStringList  PythonQtWrapper_QMimeType::suffixes(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->suffixes());
}

void PythonQtWrapper_QMimeType::swap(QMimeType* theWrappedObject, QMimeType&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QMimeType::py_toString(QMimeType* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QModelIndex* PythonQtWrapper_QModelIndex::new_QModelIndex()
{ 
return new QModelIndex(); }

QModelIndex  PythonQtWrapper_QModelIndex::child(QModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->child(row, column));
}

int  PythonQtWrapper_QModelIndex::column(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

QVariant  PythonQtWrapper_QModelIndex::data(QModelIndex* theWrappedObject, int  role) const
{
  return ( theWrappedObject->data(role));
}

Qt::ItemFlags  PythonQtWrapper_QModelIndex::flags(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

quintptr  PythonQtWrapper_QModelIndex::internalId(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalId());
}

void*  PythonQtWrapper_QModelIndex::internalPointer(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalPointer());
}

bool  PythonQtWrapper_QModelIndex::isValid(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QAbstractItemModel*  PythonQtWrapper_QModelIndex::model(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

bool  PythonQtWrapper_QModelIndex::__ne__(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QModelIndex::__lt__(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)< other);
}

bool  PythonQtWrapper_QModelIndex::__eq__(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)== other);
}

QModelIndex  PythonQtWrapper_QModelIndex::parent(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

int  PythonQtWrapper_QModelIndex::row(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

QModelIndex  PythonQtWrapper_QModelIndex::sibling(QModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->sibling(row, column));
}

QModelIndex  PythonQtWrapper_QModelIndex::siblingAtColumn(QModelIndex* theWrappedObject, int  column) const
{
  return ( theWrappedObject->siblingAtColumn(column));
}

QModelIndex  PythonQtWrapper_QModelIndex::siblingAtRow(QModelIndex* theWrappedObject, int  row) const
{
  return ( theWrappedObject->siblingAtRow(row));
}

QString PythonQtWrapper_QModelIndex::py_toString(QModelIndex* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QMutex* PythonQtWrapper_QMutex::new_QMutex()
{ 
return new QMutex(); }

QMutex* PythonQtWrapper_QMutex::new_QMutex(QMutex::RecursionMode  mode)
{ 
return new QMutex(mode); }

bool  PythonQtWrapper_QMutex::isRecursive(QMutex* theWrappedObject) const
{
  return ( theWrappedObject->isRecursive());
}

void PythonQtWrapper_QMutex::lock(QMutex* theWrappedObject)
{
  ( theWrappedObject->lock());
}

bool  PythonQtWrapper_QMutex::tryLock(QMutex* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLock(timeout));
}

bool  PythonQtWrapper_QMutex::try_lock(QMutex* theWrappedObject)
{
  return ( theWrappedObject->try_lock());
}

void PythonQtWrapper_QMutex::unlock(QMutex* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



QMutexLocker* PythonQtWrapper_QMutexLocker::new_QMutexLocker(QBasicMutex*  m)
{ 
return new QMutexLocker(m); }

QMutexLocker* PythonQtWrapper_QMutexLocker::new_QMutexLocker(QRecursiveMutex*  m)
{ 
return new QMutexLocker(m); }

QMutex*  PythonQtWrapper_QMutexLocker::mutex(QMutexLocker* theWrappedObject) const
{
  return ( theWrappedObject->mutex());
}

void PythonQtWrapper_QMutexLocker::relock(QMutexLocker* theWrappedObject)
{
  ( theWrappedObject->relock());
}

void PythonQtWrapper_QMutexLocker::unlock(QMutexLocker* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



PythonQtShell_QObject::~PythonQtShell_QObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QObject::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QObject::childEvent(event0);
}
void PythonQtShell_QObject::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QObject::customEvent(event0);
}
bool  PythonQtShell_QObject::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QObject::event(event0);
}
bool  PythonQtShell_QObject::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QObject::eventFilter(watched0, event1);
}
void PythonQtShell_QObject::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QObject::timerEvent(event0);
}
QObject* PythonQtWrapper_QObject::new_QObject(QObject*  parent)
{ 
return new PythonQtShell_QObject(parent); }

const QMetaObject* PythonQtShell_QObject::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QObject::staticMetaObject);
  } else {
    return &QObject::staticMetaObject;
  }
}
int PythonQtShell_QObject::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QObject::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QObject::blockSignals(QObject* theWrappedObject, bool  b)
{
  return ( theWrappedObject->blockSignals(b));
}

void PythonQtWrapper_QObject::childEvent(QObject* theWrappedObject, QChildEvent*  event)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_childEvent(event));
}

const QList<QObject* >*  PythonQtWrapper_QObject::children(QObject* theWrappedObject) const
{
  return &( theWrappedObject->children());
}

void PythonQtWrapper_QObject::customEvent(QObject* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_customEvent(event));
}

void PythonQtWrapper_QObject::dumpObjectInfo(QObject* theWrappedObject)
{
  ( theWrappedObject->dumpObjectInfo());
}

void PythonQtWrapper_QObject::dumpObjectInfo(QObject* theWrappedObject) const
{
  ( theWrappedObject->dumpObjectInfo());
}

void PythonQtWrapper_QObject::dumpObjectTree(QObject* theWrappedObject)
{
  ( theWrappedObject->dumpObjectTree());
}

void PythonQtWrapper_QObject::dumpObjectTree(QObject* theWrappedObject) const
{
  ( theWrappedObject->dumpObjectTree());
}

QList<QByteArray >  PythonQtWrapper_QObject::dynamicPropertyNames(QObject* theWrappedObject) const
{
  return ( theWrappedObject->dynamicPropertyNames());
}

bool  PythonQtWrapper_QObject::event(QObject* theWrappedObject, QEvent*  event)
{
  return ( theWrappedObject->event(event));
}

bool  PythonQtWrapper_QObject::eventFilter(QObject* theWrappedObject, QObject*  watched, QEvent*  event)
{
  return ( theWrappedObject->eventFilter(watched, event));
}

void PythonQtWrapper_QObject::installEventFilter(QObject* theWrappedObject, QObject*  filterObj)
{
  ( theWrappedObject->installEventFilter(filterObj));
}

bool  PythonQtWrapper_QObject::isSignalConnected(QObject* theWrappedObject, const QMetaMethod&  signal) const
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_isSignalConnected(signal));
}

bool  PythonQtWrapper_QObject::isWidgetType(QObject* theWrappedObject) const
{
  return ( theWrappedObject->isWidgetType());
}

bool  PythonQtWrapper_QObject::isWindowType(QObject* theWrappedObject) const
{
  return ( theWrappedObject->isWindowType());
}

void PythonQtWrapper_QObject::killTimer(QObject* theWrappedObject, int  id)
{
  ( theWrappedObject->killTimer(id));
}

void PythonQtWrapper_QObject::moveToThread(QObject* theWrappedObject, QThread*  thread)
{
  ( theWrappedObject->moveToThread(thread));
}

QString  PythonQtWrapper_QObject::objectName(QObject* theWrappedObject) const
{
  return ( theWrappedObject->objectName());
}

void PythonQtWrapper_QObject::removeEventFilter(QObject* theWrappedObject, QObject*  obj)
{
  ( theWrappedObject->removeEventFilter(obj));
}

QObject*  PythonQtWrapper_QObject::sender(QObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_sender());
}

int  PythonQtWrapper_QObject::senderSignalIndex(QObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_senderSignalIndex());
}

void PythonQtWrapper_QObject::setObjectName(QObject* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setObjectName(name));
}

bool  PythonQtWrapper_QObject::signalsBlocked(QObject* theWrappedObject) const
{
  return ( theWrappedObject->signalsBlocked());
}

int  PythonQtWrapper_QObject::startTimer(QObject* theWrappedObject, int  interval, Qt::TimerType  timerType)
{
  return ( theWrappedObject->startTimer(interval, timerType));
}

QThread*  PythonQtWrapper_QObject::thread(QObject* theWrappedObject) const
{
  return ( theWrappedObject->thread());
}

void PythonQtWrapper_QObject::timerEvent(QObject* theWrappedObject, QTimerEvent*  event)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_timerEvent(event));
}



PythonQtShell_QOperatingSystemVersion::~PythonQtShell_QOperatingSystemVersion() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QOperatingSystemVersion* PythonQtWrapper_QOperatingSystemVersion::new_QOperatingSystemVersion(QOperatingSystemVersion::OSType  osType, int  vmajor, int  vminor, int  vmicro)
{ 
return new PythonQtShell_QOperatingSystemVersion(osType, vmajor, vminor, vmicro); }

QOperatingSystemVersion  PythonQtWrapper_QOperatingSystemVersion::static_QOperatingSystemVersion_current()
{
  return (QOperatingSystemVersion::current());
}

QOperatingSystemVersion::OSType  PythonQtWrapper_QOperatingSystemVersion::static_QOperatingSystemVersion_currentType()
{
  return (QOperatingSystemVersion::currentType());
}

int  PythonQtWrapper_QOperatingSystemVersion::majorVersion(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->majorVersion());
}

int  PythonQtWrapper_QOperatingSystemVersion::microVersion(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->microVersion());
}

int  PythonQtWrapper_QOperatingSystemVersion::minorVersion(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->minorVersion());
}

QString  PythonQtWrapper_QOperatingSystemVersion::name(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QOperatingSystemVersion::__lt__(QOperatingSystemVersion* theWrappedObject, const QOperatingSystemVersion&  rhs)
{
  return ( (*theWrappedObject)< rhs);
}

bool  PythonQtWrapper_QOperatingSystemVersion::__le__(QOperatingSystemVersion* theWrappedObject, const QOperatingSystemVersion&  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QOperatingSystemVersion::__gt__(QOperatingSystemVersion* theWrappedObject, const QOperatingSystemVersion&  rhs)
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QOperatingSystemVersion::__ge__(QOperatingSystemVersion* theWrappedObject, const QOperatingSystemVersion&  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

int  PythonQtWrapper_QOperatingSystemVersion::segmentCount(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->segmentCount());
}

QOperatingSystemVersion::OSType  PythonQtWrapper_QOperatingSystemVersion::type(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QOperatingSystemVersion::py_toString(QOperatingSystemVersion* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QParallelAnimationGroup::~PythonQtShell_QParallelAnimationGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QParallelAnimationGroup::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::childEvent(event0);
}
void PythonQtShell_QParallelAnimationGroup::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::customEvent(event0);
}
int  PythonQtShell_QParallelAnimationGroup::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QParallelAnimationGroup::duration();
}
bool  PythonQtShell_QParallelAnimationGroup::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QParallelAnimationGroup::event(event0);
}
bool  PythonQtShell_QParallelAnimationGroup::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QParallelAnimationGroup::eventFilter(watched0, event1);
}
void PythonQtShell_QParallelAnimationGroup::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::timerEvent(event0);
}
void PythonQtShell_QParallelAnimationGroup::updateCurrentTime(int  currentTime0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&currentTime0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::updateCurrentTime(currentTime0);
}
void PythonQtShell_QParallelAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::updateDirection(direction0);
}
void PythonQtShell_QParallelAnimationGroup::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::updateState(newState0, oldState1);
}
QParallelAnimationGroup* PythonQtWrapper_QParallelAnimationGroup::new_QParallelAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QParallelAnimationGroup(parent); }

const QMetaObject* PythonQtShell_QParallelAnimationGroup::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QParallelAnimationGroup::staticMetaObject);
  } else {
    return &QParallelAnimationGroup::staticMetaObject;
  }
}
int PythonQtShell_QParallelAnimationGroup::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QParallelAnimationGroup::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


PythonQtShell_QPauseAnimation::~PythonQtShell_QPauseAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPauseAnimation::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::childEvent(event0);
}
void PythonQtShell_QPauseAnimation::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::customEvent(event0);
}
int  PythonQtShell_QPauseAnimation::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPauseAnimation::duration();
}
bool  PythonQtShell_QPauseAnimation::event(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPauseAnimation::event(e0);
}
bool  PythonQtShell_QPauseAnimation::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPauseAnimation::eventFilter(watched0, event1);
}
void PythonQtShell_QPauseAnimation::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::timerEvent(event0);
}
void PythonQtShell_QPauseAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QPauseAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::updateDirection(direction0);
}
void PythonQtShell_QPauseAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::updateState(newState0, oldState1);
}
QPauseAnimation* PythonQtWrapper_QPauseAnimation::new_QPauseAnimation(QObject*  parent)
{ 
return new PythonQtShell_QPauseAnimation(parent); }

QPauseAnimation* PythonQtWrapper_QPauseAnimation::new_QPauseAnimation(int  msecs, QObject*  parent)
{ 
return new PythonQtShell_QPauseAnimation(msecs, parent); }

const QMetaObject* PythonQtShell_QPauseAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QPauseAnimation::staticMetaObject);
  } else {
    return &QPauseAnimation::staticMetaObject;
  }
}
int PythonQtShell_QPauseAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QPauseAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QPauseAnimation::setDuration(QPauseAnimation* theWrappedObject, int  msecs)
{
  ( theWrappedObject->setDuration(msecs));
}



QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex()
{ 
return new QPersistentModelIndex(); }

QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex(const QModelIndex&  index)
{ 
return new QPersistentModelIndex(index); }

QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex(const QPersistentModelIndex&  other)
{ 
return new QPersistentModelIndex(other); }

QModelIndex  PythonQtWrapper_QPersistentModelIndex::child(QPersistentModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->child(row, column));
}

int  PythonQtWrapper_QPersistentModelIndex::column(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

QVariant  PythonQtWrapper_QPersistentModelIndex::data(QPersistentModelIndex* theWrappedObject, int  role) const
{
  return ( theWrappedObject->data(role));
}

Qt::ItemFlags  PythonQtWrapper_QPersistentModelIndex::flags(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

quintptr  PythonQtWrapper_QPersistentModelIndex::internalId(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalId());
}

bool  PythonQtWrapper_QPersistentModelIndex::isValid(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QAbstractItemModel*  PythonQtWrapper_QPersistentModelIndex::model(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::operator_cast_QModelIndex(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->operator const QModelIndex&());
}

bool  PythonQtWrapper_QPersistentModelIndex::__ne__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QPersistentModelIndex::__ne__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QPersistentModelIndex::__lt__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const
{
  return ( (*theWrappedObject)< other);
}

bool  PythonQtWrapper_QPersistentModelIndex::__eq__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QPersistentModelIndex::__eq__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const
{
  return ( (*theWrappedObject)== other);
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::parent(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

int  PythonQtWrapper_QPersistentModelIndex::row(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::sibling(QPersistentModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->sibling(row, column));
}

void PythonQtWrapper_QPersistentModelIndex::swap(QPersistentModelIndex* theWrappedObject, QPersistentModelIndex&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QPersistentModelIndex::py_toString(QPersistentModelIndex* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QProcess::~PythonQtShell_QProcess() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QProcess::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::atEnd();
}
qint64  PythonQtShell_QProcess::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::bytesAvailable();
}
qint64  PythonQtShell_QProcess::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::bytesToWrite();
}
bool  PythonQtShell_QProcess::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::canReadLine();
}
void PythonQtShell_QProcess::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QProcess::childEvent(event0);
}
void PythonQtShell_QProcess::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QProcess::close();
}
void PythonQtShell_QProcess::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QProcess::customEvent(event0);
}
bool  PythonQtShell_QProcess::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::event(event0);
}
bool  PythonQtShell_QProcess::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::eventFilter(watched0, event1);
}
bool  PythonQtShell_QProcess::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::isSequential();
}
bool  PythonQtShell_QProcess::open(QIODevice::OpenMode  mode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::open(mode0);
}
qint64  PythonQtShell_QProcess::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::pos();
}
qint64  PythonQtShell_QProcess::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::readData(data0, maxlen1);
}
qint64  PythonQtShell_QProcess::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QProcess::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::reset();
}
bool  PythonQtShell_QProcess::seek(qint64  pos0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&pos0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::seek(pos0);
}
void PythonQtShell_QProcess::setupChildProcess()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setupChildProcess");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QProcess::setupChildProcess();
}
qint64  PythonQtShell_QProcess::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::size();
}
void PythonQtShell_QProcess::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QProcess::timerEvent(event0);
}
bool  PythonQtShell_QProcess::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QProcess::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QProcess::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::writeData(data0, len1);
}
QProcess* PythonQtWrapper_QProcess::new_QProcess(QObject*  parent)
{ 
return new PythonQtShell_QProcess(parent); }

const QMetaObject* PythonQtShell_QProcess::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QProcess::staticMetaObject);
  } else {
    return &QProcess::staticMetaObject;
  }
}
int PythonQtShell_QProcess::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QProcess::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QStringList  PythonQtWrapper_QProcess::arguments(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->arguments());
}

void PythonQtWrapper_QProcess::closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
  ( theWrappedObject->closeReadChannel(channel));
}

void PythonQtWrapper_QProcess::closeWriteChannel(QProcess* theWrappedObject)
{
  ( theWrappedObject->closeWriteChannel());
}

QStringList  PythonQtWrapper_QProcess::environment(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->environment());
}

QProcess::ProcessError  PythonQtWrapper_QProcess::error(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  command)
{
  return (QProcess::execute(command));
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  program, const QStringList&  arguments)
{
  return (QProcess::execute(program, arguments));
}

int  PythonQtWrapper_QProcess::exitCode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->exitCode());
}

QProcess::ExitStatus  PythonQtWrapper_QProcess::exitStatus(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->exitStatus());
}

QProcess::InputChannelMode  PythonQtWrapper_QProcess::inputChannelMode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->inputChannelMode());
}

QString  PythonQtWrapper_QProcess::static_QProcess_nullDevice()
{
  return (QProcess::nullDevice());
}

QProcess::ProcessChannelMode  PythonQtWrapper_QProcess::processChannelMode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processChannelMode());
}

QProcessEnvironment  PythonQtWrapper_QProcess::processEnvironment(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processEnvironment());
}

qint64  PythonQtWrapper_QProcess::processId(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processId());
}

QString  PythonQtWrapper_QProcess::program(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->program());
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardError(QProcess* theWrappedObject)
{
  return ( theWrappedObject->readAllStandardError());
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardOutput(QProcess* theWrappedObject)
{
  return ( theWrappedObject->readAllStandardOutput());
}

QProcess::ProcessChannel  PythonQtWrapper_QProcess::readChannel(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->readChannel());
}

void PythonQtWrapper_QProcess::setArguments(QProcess* theWrappedObject, const QStringList&  arguments)
{
  ( theWrappedObject->setArguments(arguments));
}

void PythonQtWrapper_QProcess::setEnvironment(QProcess* theWrappedObject, const QStringList&  environment)
{
  ( theWrappedObject->setEnvironment(environment));
}

void PythonQtWrapper_QProcess::setInputChannelMode(QProcess* theWrappedObject, QProcess::InputChannelMode  mode)
{
  ( theWrappedObject->setInputChannelMode(mode));
}

void PythonQtWrapper_QProcess::setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode)
{
  ( theWrappedObject->setProcessChannelMode(mode));
}

void PythonQtWrapper_QProcess::setProcessEnvironment(QProcess* theWrappedObject, const QProcessEnvironment&  environment)
{
  ( theWrappedObject->setProcessEnvironment(environment));
}

void PythonQtWrapper_QProcess::setProcessState(QProcess* theWrappedObject, QProcess::ProcessState  state)
{
  ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_setProcessState(state));
}

void PythonQtWrapper_QProcess::setProgram(QProcess* theWrappedObject, const QString&  program)
{
  ( theWrappedObject->setProgram(program));
}

void PythonQtWrapper_QProcess::setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
  ( theWrappedObject->setReadChannel(channel));
}

void PythonQtWrapper_QProcess::setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->setStandardErrorFile(fileName, mode));
}

void PythonQtWrapper_QProcess::setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setStandardInputFile(fileName));
}

void PythonQtWrapper_QProcess::setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->setStandardOutputFile(fileName, mode));
}

void PythonQtWrapper_QProcess::setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination)
{
  ( theWrappedObject->setStandardOutputProcess(destination));
}

void PythonQtWrapper_QProcess::setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir)
{
  ( theWrappedObject->setWorkingDirectory(dir));
}

void PythonQtWrapper_QProcess::setupChildProcess(QProcess* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_setupChildProcess());
}

QStringList  PythonQtWrapper_QProcess::static_QProcess_splitCommand(QStringView  command)
{
  return (QProcess::splitCommand(command));
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->start(mode));
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  command, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->start(command, mode));
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->start(program, arguments, mode));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  command)
{
  return (QProcess::startDetached(command));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments)
{
  return (QProcess::startDetached(program, arguments));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid)
{
  return (QProcess::startDetached(program, arguments, workingDirectory, pid));
}

bool  PythonQtWrapper_QProcess::startDetached(QProcess* theWrappedObject, qint64*  pid)
{
  return ( theWrappedObject->startDetached(pid));
}

QProcess::ProcessState  PythonQtWrapper_QProcess::state(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QStringList  PythonQtWrapper_QProcess::static_QProcess_systemEnvironment()
{
  return (QProcess::systemEnvironment());
}

bool  PythonQtWrapper_QProcess::waitForFinished(QProcess* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForFinished(msecs));
}

bool  PythonQtWrapper_QProcess::waitForStarted(QProcess* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForStarted(msecs));
}

QString  PythonQtWrapper_QProcess::workingDirectory(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->workingDirectory());
}



QProcessEnvironment* PythonQtWrapper_QProcessEnvironment::new_QProcessEnvironment()
{ 
return new QProcessEnvironment(); }

QProcessEnvironment* PythonQtWrapper_QProcessEnvironment::new_QProcessEnvironment(const QProcessEnvironment&  other)
{ 
return new QProcessEnvironment(other); }

void PythonQtWrapper_QProcessEnvironment::clear(QProcessEnvironment* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QProcessEnvironment::contains(QProcessEnvironment* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->contains(name));
}

void PythonQtWrapper_QProcessEnvironment::insert(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  e)
{
  ( theWrappedObject->insert(e));
}

void PythonQtWrapper_QProcessEnvironment::insert(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->insert(name, value));
}

bool  PythonQtWrapper_QProcessEnvironment::isEmpty(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QStringList  PythonQtWrapper_QProcessEnvironment::keys(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

bool  PythonQtWrapper_QProcessEnvironment::__ne__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QProcessEnvironment*  PythonQtWrapper_QProcessEnvironment::operator_assign(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QProcessEnvironment::__eq__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QProcessEnvironment::remove(QProcessEnvironment* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->remove(name));
}

void PythonQtWrapper_QProcessEnvironment::swap(QProcessEnvironment* theWrappedObject, QProcessEnvironment&  other)
{
  ( theWrappedObject->swap(other));
}

QProcessEnvironment  PythonQtWrapper_QProcessEnvironment::static_QProcessEnvironment_systemEnvironment()
{
  return (QProcessEnvironment::systemEnvironment());
}

QStringList  PythonQtWrapper_QProcessEnvironment::toStringList(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->toStringList());
}

QString  PythonQtWrapper_QProcessEnvironment::value(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  defaultValue) const
{
  return ( theWrappedObject->value(name, defaultValue));
}



PythonQtShell_QPropertyAnimation::~PythonQtShell_QPropertyAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPropertyAnimation::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::childEvent(event0);
}
void PythonQtShell_QPropertyAnimation::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::customEvent(event0);
}
int  PythonQtShell_QPropertyAnimation::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPropertyAnimation::duration();
}
bool  PythonQtShell_QPropertyAnimation::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPropertyAnimation::event(event0);
}
bool  PythonQtShell_QPropertyAnimation::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPropertyAnimation::eventFilter(watched0, event1);
}
QVariant  PythonQtShell_QPropertyAnimation::interpolated(const QVariant&  from0, const QVariant&  to1, qreal  progress2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("interpolated");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&" , "const QVariant&" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue{};
      void* args[4] = {nullptr, (void*)&from0, (void*)&to1, (void*)&progress2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("interpolated", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPropertyAnimation::interpolated(from0, to1, progress2);
}
void PythonQtShell_QPropertyAnimation::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::timerEvent(event0);
}
void PythonQtShell_QPropertyAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QPropertyAnimation::updateCurrentValue(const QVariant&  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentValue");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&value0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::updateCurrentValue(value0);
}
void PythonQtShell_QPropertyAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::updateDirection(direction0);
}
void PythonQtShell_QPropertyAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::updateState(newState0, oldState1);
}
QPropertyAnimation* PythonQtWrapper_QPropertyAnimation::new_QPropertyAnimation(QObject*  parent)
{ 
return new PythonQtShell_QPropertyAnimation(parent); }

QPropertyAnimation* PythonQtWrapper_QPropertyAnimation::new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent)
{ 
return new PythonQtShell_QPropertyAnimation(target, propertyName, parent); }

const QMetaObject* PythonQtShell_QPropertyAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QPropertyAnimation::staticMetaObject);
  } else {
    return &QPropertyAnimation::staticMetaObject;
  }
}
int PythonQtShell_QPropertyAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QPropertyAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QByteArray  PythonQtWrapper_QPropertyAnimation::propertyName(QPropertyAnimation* theWrappedObject) const
{
  return ( theWrappedObject->propertyName());
}

void PythonQtWrapper_QPropertyAnimation::setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName)
{
  ( theWrappedObject->setPropertyName(propertyName));
}

void PythonQtWrapper_QPropertyAnimation::setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target)
{
  ( theWrappedObject->setTargetObject(target));
}

QObject*  PythonQtWrapper_QPropertyAnimation::targetObject(QPropertyAnimation* theWrappedObject) const
{
  return ( theWrappedObject->targetObject());
}



QRandomGenerator* PythonQtWrapper_QRandomGenerator::new_QRandomGenerator(const QRandomGenerator&  other)
{ 
return new QRandomGenerator(other); }

QRandomGenerator* PythonQtWrapper_QRandomGenerator::new_QRandomGenerator(const unsigned int*  begin, const unsigned int*  end)
{ 
return new QRandomGenerator(begin, end); }

QRandomGenerator* PythonQtWrapper_QRandomGenerator::new_QRandomGenerator(const unsigned int*  seedBuffer, qsizetype  len)
{ 
return new QRandomGenerator(seedBuffer, len); }

QRandomGenerator* PythonQtWrapper_QRandomGenerator::new_QRandomGenerator(unsigned int  seedValue)
{ 
return new QRandomGenerator(seedValue); }

double  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, double  highest)
{
  return ( theWrappedObject->bounded(highest));
}

int  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, int  highest)
{
  return ( theWrappedObject->bounded(highest));
}

int  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, int  lowest, int  highest)
{
  return ( theWrappedObject->bounded(lowest, highest));
}

unsigned int  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, unsigned int  highest)
{
  return ( theWrappedObject->bounded(highest));
}

unsigned int  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, unsigned int  lowest, unsigned int  highest)
{
  return ( theWrappedObject->bounded(lowest, highest));
}

void PythonQtWrapper_QRandomGenerator::discard(QRandomGenerator* theWrappedObject, quint64  z)
{
  ( theWrappedObject->discard(z));
}

unsigned int  PythonQtWrapper_QRandomGenerator::generate(QRandomGenerator* theWrappedObject)
{
  return ( theWrappedObject->generate());
}

void PythonQtWrapper_QRandomGenerator::generate(QRandomGenerator* theWrappedObject, unsigned int*  begin, unsigned int*  end)
{
  ( theWrappedObject->generate(begin, end));
}

quint64  PythonQtWrapper_QRandomGenerator::generate64(QRandomGenerator* theWrappedObject)
{
  return ( theWrappedObject->generate64());
}

double  PythonQtWrapper_QRandomGenerator::generateDouble(QRandomGenerator* theWrappedObject)
{
  return ( theWrappedObject->generateDouble());
}

QRandomGenerator*  PythonQtWrapper_QRandomGenerator::static_QRandomGenerator_global()
{
  return (QRandomGenerator::global());
}

unsigned int  PythonQtWrapper_QRandomGenerator::static_QRandomGenerator_max()
{
  return (QRandomGenerator::max());
}

unsigned int  PythonQtWrapper_QRandomGenerator::static_QRandomGenerator_min()
{
  return (QRandomGenerator::min());
}

bool  PythonQtWrapper_QRandomGenerator::__ne__(QRandomGenerator* theWrappedObject, const QRandomGenerator&  rng2)
{
  return ( (*theWrappedObject)!= rng2);
}

unsigned int  PythonQtWrapper_QRandomGenerator::operator_cast_(QRandomGenerator* theWrappedObject)
{
  return ( theWrappedObject->operator()());
}

QRandomGenerator*  PythonQtWrapper_QRandomGenerator::operator_assign(QRandomGenerator* theWrappedObject, const QRandomGenerator&  other)
{
  return &( (*theWrappedObject)= other);
}

QRandomGenerator  PythonQtWrapper_QRandomGenerator::static_QRandomGenerator_securelySeeded()
{
  return (QRandomGenerator::securelySeeded());
}

void PythonQtWrapper_QRandomGenerator::seed(QRandomGenerator* theWrappedObject, unsigned int  s)
{
  ( theWrappedObject->seed(s));
}

QRandomGenerator*  PythonQtWrapper_QRandomGenerator::static_QRandomGenerator_system()
{
  return (QRandomGenerator::system());
}



QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const QRandomGenerator&  other)
{ 
return new QRandomGenerator64(other); }

QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const unsigned int*  begin, const unsigned int*  end)
{ 
return new QRandomGenerator64(begin, end); }

QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const unsigned int*  seedBuffer, qsizetype  len)
{ 
return new QRandomGenerator64(seedBuffer, len); }

QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(unsigned int  seedValue)
{ 
return new QRandomGenerator64(seedValue); }

void PythonQtWrapper_QRandomGenerator64::discard(QRandomGenerator64* theWrappedObject, quint64  z)
{
  ( theWrappedObject->discard(z));
}

quint64  PythonQtWrapper_QRandomGenerator64::generate(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->generate());
}

QRandomGenerator64*  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_global()
{
  return (QRandomGenerator64::global());
}

quint64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_max()
{
  return (QRandomGenerator64::max());
}

quint64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_min()
{
  return (QRandomGenerator64::min());
}

quint64  PythonQtWrapper_QRandomGenerator64::operator_cast_(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->operator()());
}

QRandomGenerator64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_securelySeeded()
{
  return (QRandomGenerator64::securelySeeded());
}

QRandomGenerator64*  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_system()
{
  return (QRandomGenerator64::system());
}



QReadLocker* PythonQtWrapper_QReadLocker::new_QReadLocker(QReadWriteLock*  readWriteLock)
{ 
return new QReadLocker(readWriteLock); }

QReadWriteLock*  PythonQtWrapper_QReadLocker::readWriteLock(QReadLocker* theWrappedObject) const
{
  return ( theWrappedObject->readWriteLock());
}

void PythonQtWrapper_QReadLocker::relock(QReadLocker* theWrappedObject)
{
  ( theWrappedObject->relock());
}

void PythonQtWrapper_QReadLocker::unlock(QReadLocker* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



QReadWriteLock* PythonQtWrapper_QReadWriteLock::new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode)
{ 
return new QReadWriteLock(recursionMode); }

void PythonQtWrapper_QReadWriteLock::lockForRead(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->lockForRead());
}

void PythonQtWrapper_QReadWriteLock::lockForWrite(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->lockForWrite());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForRead());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForRead(timeout));
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForWrite());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForWrite(timeout));
}

void PythonQtWrapper_QReadWriteLock::unlock(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



QRecursiveMutex* PythonQtWrapper_QRecursiveMutex::new_QRecursiveMutex()
{ 
return new QRecursiveMutex(); }



QRegularExpressionMatch* PythonQtWrapper_QRegularExpressionMatch::new_QRegularExpressionMatch()
{ 
return new QRegularExpressionMatch(); }

QRegularExpressionMatch* PythonQtWrapper_QRegularExpressionMatch::new_QRegularExpressionMatch(const QRegularExpressionMatch&  match)
{ 
return new QRegularExpressionMatch(match); }

QString  PythonQtWrapper_QRegularExpressionMatch::captured(QRegularExpressionMatch* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->captured(name));
}

QString  PythonQtWrapper_QRegularExpressionMatch::captured(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->captured(nth));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedEnd(QRegularExpressionMatch* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->capturedEnd(name));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedEnd(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedEnd(nth));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedLength(QRegularExpressionMatch* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->capturedLength(name));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedLength(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedLength(nth));
}

QStringRef  PythonQtWrapper_QRegularExpressionMatch::capturedRef(QRegularExpressionMatch* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->capturedRef(name));
}

QStringRef  PythonQtWrapper_QRegularExpressionMatch::capturedRef(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedRef(nth));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedStart(QRegularExpressionMatch* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->capturedStart(name));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedStart(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedStart(nth));
}

QStringList  PythonQtWrapper_QRegularExpressionMatch::capturedTexts(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->capturedTexts());
}

QStringView  PythonQtWrapper_QRegularExpressionMatch::capturedView(QRegularExpressionMatch* theWrappedObject, QStringView  name) const
{
  return ( theWrappedObject->capturedView(name));
}

QStringView  PythonQtWrapper_QRegularExpressionMatch::capturedView(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedView(nth));
}

bool  PythonQtWrapper_QRegularExpressionMatch::hasMatch(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->hasMatch());
}

bool  PythonQtWrapper_QRegularExpressionMatch::hasPartialMatch(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->hasPartialMatch());
}

bool  PythonQtWrapper_QRegularExpressionMatch::isValid(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QRegularExpressionMatch::lastCapturedIndex(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->lastCapturedIndex());
}

QRegularExpression::MatchOptions  PythonQtWrapper_QRegularExpressionMatch::matchOptions(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->matchOptions());
}

QRegularExpression::MatchType  PythonQtWrapper_QRegularExpressionMatch::matchType(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->matchType());
}

QRegularExpressionMatch*  PythonQtWrapper_QRegularExpressionMatch::operator_assign(QRegularExpressionMatch* theWrappedObject, const QRegularExpressionMatch&  match)
{
  return &( (*theWrappedObject)= match);
}

QRegularExpression  PythonQtWrapper_QRegularExpressionMatch::regularExpression(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->regularExpression());
}

void PythonQtWrapper_QRegularExpressionMatch::swap(QRegularExpressionMatch* theWrappedObject, QRegularExpressionMatch&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QRegularExpressionMatch::py_toString(QRegularExpressionMatch* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRegularExpressionMatchIterator* PythonQtWrapper_QRegularExpressionMatchIterator::new_QRegularExpressionMatchIterator()
{ 
return new QRegularExpressionMatchIterator(); }

QRegularExpressionMatchIterator* PythonQtWrapper_QRegularExpressionMatchIterator::new_QRegularExpressionMatchIterator(const QRegularExpressionMatchIterator&  iterator)
{ 
return new QRegularExpressionMatchIterator(iterator); }

bool  PythonQtWrapper_QRegularExpressionMatchIterator::hasNext(QRegularExpressionMatchIterator* theWrappedObject) const
{
  return ( theWrappedObject->hasNext());
}

bool  PythonQtWrapper_QRegularExpressionMatchIterator::isValid(QRegularExpressionMatchIterator* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QRegularExpression::MatchOptions  PythonQtWrapper_QRegularExpressionMatchIterator::matchOptions(QRegularExpressionMatchIterator* theWrappedObject) const
{
  return ( theWrappedObject->matchOptions());
}

QRegularExpression::MatchType  PythonQtWrapper_QRegularExpressionMatchIterator::matchType(QRegularExpressionMatchIterator* theWrappedObject) const
{
  return ( theWrappedObject->matchType());
}

QRegularExpressionMatch  PythonQtWrapper_QRegularExpressionMatchIterator::next(QRegularExpressionMatchIterator* theWrappedObject)
{
  return ( theWrappedObject->next());
}

QRegularExpressionMatchIterator*  PythonQtWrapper_QRegularExpressionMatchIterator::operator_assign(QRegularExpressionMatchIterator* theWrappedObject, const QRegularExpressionMatchIterator&  iterator)
{
  return &( (*theWrappedObject)= iterator);
}

QRegularExpressionMatch  PythonQtWrapper_QRegularExpressionMatchIterator::peekNext(QRegularExpressionMatchIterator* theWrappedObject) const
{
  return ( theWrappedObject->peekNext());
}

QRegularExpression  PythonQtWrapper_QRegularExpressionMatchIterator::regularExpression(QRegularExpressionMatchIterator* theWrappedObject) const
{
  return ( theWrappedObject->regularExpression());
}

void PythonQtWrapper_QRegularExpressionMatchIterator::swap(QRegularExpressionMatchIterator* theWrappedObject, QRegularExpressionMatchIterator&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QResource::~PythonQtShell_QResource() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QResource* PythonQtWrapper_QResource::new_QResource(const QString&  file, const QLocale&  locale)
{ 
return new PythonQtShell_QResource(file, locale); }

QString  PythonQtWrapper_QResource::absoluteFilePath(QResource* theWrappedObject) const
{
  return ( theWrappedObject->absoluteFilePath());
}

void PythonQtWrapper_QResource::static_QResource_addSearchPath(const QString&  path)
{
  (QResource::addSearchPath(path));
}

QStringList  PythonQtWrapper_QResource::children(QResource* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QResource*)theWrappedObject)->promoted_children());
}

QResource::Compression  PythonQtWrapper_QResource::compressionAlgorithm(QResource* theWrappedObject) const
{
  return ( theWrappedObject->compressionAlgorithm());
}

const uchar*  PythonQtWrapper_QResource::data(QResource* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

QString  PythonQtWrapper_QResource::fileName(QResource* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

bool  PythonQtWrapper_QResource::isCompressed(QResource* theWrappedObject) const
{
  return ( theWrappedObject->isCompressed());
}

bool  PythonQtWrapper_QResource::isDir(QResource* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QResource*)theWrappedObject)->promoted_isDir());
}

bool  PythonQtWrapper_QResource::isFile(QResource* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QResource*)theWrappedObject)->promoted_isFile());
}

bool  PythonQtWrapper_QResource::isValid(QResource* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QDateTime  PythonQtWrapper_QResource::lastModified(QResource* theWrappedObject) const
{
  return ( theWrappedObject->lastModified());
}

QLocale  PythonQtWrapper_QResource::locale(QResource* theWrappedObject) const
{
  return ( theWrappedObject->locale());
}

bool  PythonQtWrapper_QResource::static_QResource_registerResource(const QString&  rccFilename, const QString&  resourceRoot)
{
  return (QResource::registerResource(rccFilename, resourceRoot));
}

bool  PythonQtWrapper_QResource::static_QResource_registerResource(const uchar*  rccData, const QString&  resourceRoot)
{
  return (QResource::registerResource(rccData, resourceRoot));
}

QStringList  PythonQtWrapper_QResource::static_QResource_searchPaths()
{
  return (QResource::searchPaths());
}

void PythonQtWrapper_QResource::setFileName(QResource* theWrappedObject, const QString&  file)
{
  ( theWrappedObject->setFileName(file));
}

void PythonQtWrapper_QResource::setLocale(QResource* theWrappedObject, const QLocale&  locale)
{
  ( theWrappedObject->setLocale(locale));
}

qint64  PythonQtWrapper_QResource::size(QResource* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QByteArray  PythonQtWrapper_QResource::uncompressedData(QResource* theWrappedObject) const
{
  return ( theWrappedObject->uncompressedData());
}

qint64  PythonQtWrapper_QResource::uncompressedSize(QResource* theWrappedObject) const
{
  return ( theWrappedObject->uncompressedSize());
}

bool  PythonQtWrapper_QResource::static_QResource_unregisterResource(const QString&  rccFilename, const QString&  resourceRoot)
{
  return (QResource::unregisterResource(rccFilename, resourceRoot));
}

bool  PythonQtWrapper_QResource::static_QResource_unregisterResource(const uchar*  rccData, const QString&  resourceRoot)
{
  return (QResource::unregisterResource(rccData, resourceRoot));
}



PythonQtShell_QRunnable::~PythonQtShell_QRunnable() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRunnable::run()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("run");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QRunnable* PythonQtWrapper_QRunnable::new_QRunnable()
{ 
return new PythonQtShell_QRunnable(); }

bool  PythonQtWrapper_QRunnable::autoDelete(QRunnable* theWrappedObject) const
{
  return ( theWrappedObject->autoDelete());
}

void PythonQtWrapper_QRunnable::run(QRunnable* theWrappedObject)
{
  ( theWrappedObject->run());
}

void PythonQtWrapper_QRunnable::setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete)
{
  ( theWrappedObject->setAutoDelete(_autoDelete));
}



PythonQtShell_QSaveFile::~PythonQtShell_QSaveFile() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QSaveFile::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::atEnd();
}
qint64  PythonQtShell_QSaveFile::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::bytesAvailable();
}
qint64  PythonQtShell_QSaveFile::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::bytesToWrite();
}
bool  PythonQtShell_QSaveFile::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::canReadLine();
}
void PythonQtShell_QSaveFile::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSaveFile::childEvent(event0);
}
void PythonQtShell_QSaveFile::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSaveFile::customEvent(event0);
}
bool  PythonQtShell_QSaveFile::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::event(event0);
}
bool  PythonQtShell_QSaveFile::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::eventFilter(watched0, event1);
}
QString  PythonQtShell_QSaveFile::fileName() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("fileName");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("fileName", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::fileName();
}
bool  PythonQtShell_QSaveFile::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::isSequential();
}
bool  PythonQtShell_QSaveFile::open(QIODevice::OpenMode  flags0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&flags0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::open(flags0);
}
QFileDevice::Permissions  PythonQtShell_QSaveFile::permissions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("permissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QFileDevice::Permissions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("permissions", methodInfo, result);
          } else {
            returnValue = *((QFileDevice::Permissions*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::permissions();
}
qint64  PythonQtShell_QSaveFile::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::pos();
}
qint64  PythonQtShell_QSaveFile::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::readData(data0, maxlen1);
}
qint64  PythonQtShell_QSaveFile::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QSaveFile::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::reset();
}
bool  PythonQtShell_QSaveFile::resize(qint64  sz0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&sz0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resize", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::resize(sz0);
}
bool  PythonQtShell_QSaveFile::seek(qint64  offset0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::seek(offset0);
}
bool  PythonQtShell_QSaveFile::setPermissions(QFileDevice::Permissions  permissionSpec0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setPermissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&permissionSpec0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setPermissions", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::setPermissions(permissionSpec0);
}
qint64  PythonQtShell_QSaveFile::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::size();
}
void PythonQtShell_QSaveFile::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSaveFile::timerEvent(event0);
}
bool  PythonQtShell_QSaveFile::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QSaveFile::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QSaveFile::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::writeData(data0, len1);
}
QSaveFile* PythonQtWrapper_QSaveFile::new_QSaveFile(QObject*  parent)
{ 
return new PythonQtShell_QSaveFile(parent); }

QSaveFile* PythonQtWrapper_QSaveFile::new_QSaveFile(const QString&  name)
{ 
return new PythonQtShell_QSaveFile(name); }

QSaveFile* PythonQtWrapper_QSaveFile::new_QSaveFile(const QString&  name, QObject*  parent)
{ 
return new PythonQtShell_QSaveFile(name, parent); }

const QMetaObject* PythonQtShell_QSaveFile::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSaveFile::staticMetaObject);
  } else {
    return &QSaveFile::staticMetaObject;
  }
}
int PythonQtShell_QSaveFile::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSaveFile::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QSaveFile::cancelWriting(QSaveFile* theWrappedObject)
{
  ( theWrappedObject->cancelWriting());
}

bool  PythonQtWrapper_QSaveFile::commit(QSaveFile* theWrappedObject)
{
  return ( theWrappedObject->commit());
}

bool  PythonQtWrapper_QSaveFile::directWriteFallback(QSaveFile* theWrappedObject) const
{
  return ( theWrappedObject->directWriteFallback());
}

void PythonQtWrapper_QSaveFile::setDirectWriteFallback(QSaveFile* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setDirectWriteFallback(enabled));
}

void PythonQtWrapper_QSaveFile::setFileName(QSaveFile* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setFileName(name));
}



QSemaphore* PythonQtWrapper_QSemaphore::new_QSemaphore(int  n)
{ 
return new QSemaphore(n); }

void PythonQtWrapper_QSemaphore::acquire(QSemaphore* theWrappedObject, int  n)
{
  ( theWrappedObject->acquire(n));
}

int  PythonQtWrapper_QSemaphore::available(QSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->available());
}

void PythonQtWrapper_QSemaphore::release(QSemaphore* theWrappedObject, int  n)
{
  ( theWrappedObject->release(n));
}

bool  PythonQtWrapper_QSemaphore::tryAcquire(QSemaphore* theWrappedObject, int  n)
{
  return ( theWrappedObject->tryAcquire(n));
}

bool  PythonQtWrapper_QSemaphore::tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout)
{
  return ( theWrappedObject->tryAcquire(n, timeout));
}



PythonQtShell_QSequentialAnimationGroup::~PythonQtShell_QSequentialAnimationGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSequentialAnimationGroup::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSequentialAnimationGroup::childEvent(event0);
}
void PythonQtShell_QSequentialAnimationGroup::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSequentialAnimationGroup::customEvent(event0);
}
int  PythonQtShell_QSequentialAnimationGroup::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSequentialAnimationGroup::duration();
}
bool  PythonQtShell_QSequentialAnimationGroup::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSequentialAnimationGroup::event(event0);
}
bool  PythonQtShell_QSequentialAnimationGroup::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSequentialAnimationGroup::eventFilter(watched0, event1);
}
void PythonQtShell_QSequentialAnimationGroup::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSequentialAnimationGroup::timerEvent(event0);
}
void PythonQtShell_QSequentialAnimationGroup::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSequentialAnimationGroup::updateCurrentTime(arg__1);
}
void PythonQtShell_QSequentialAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSequentialAnimationGroup::updateDirection(direction0);
}
void PythonQtShell_QSequentialAnimationGroup::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSequentialAnimationGroup::updateState(newState0, oldState1);
}
QSequentialAnimationGroup* PythonQtWrapper_QSequentialAnimationGroup::new_QSequentialAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QSequentialAnimationGroup(parent); }

const QMetaObject* PythonQtShell_QSequentialAnimationGroup::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSequentialAnimationGroup::staticMetaObject);
  } else {
    return &QSequentialAnimationGroup::staticMetaObject;
  }
}
int PythonQtShell_QSequentialAnimationGroup::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSequentialAnimationGroup::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QPauseAnimation*  PythonQtWrapper_QSequentialAnimationGroup::addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->addPause(msecs));
}

QAbstractAnimation*  PythonQtWrapper_QSequentialAnimationGroup::currentAnimation(QSequentialAnimationGroup* theWrappedObject) const
{
  return ( theWrappedObject->currentAnimation());
}

QPauseAnimation*  PythonQtWrapper_QSequentialAnimationGroup::insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs)
{
  return ( theWrappedObject->insertPause(index, msecs));
}



PythonQtShell_QSettings::~PythonQtShell_QSettings() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSettings::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSettings::childEvent(event0);
}
void PythonQtShell_QSettings::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSettings::customEvent(event0);
}
bool  PythonQtShell_QSettings::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSettings::event(event0);
}
bool  PythonQtShell_QSettings::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSettings::eventFilter(watched0, event1);
}
void PythonQtShell_QSettings::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSettings::timerEvent(event0);
}
QSettings* PythonQtWrapper_QSettings::new_QSettings(QObject*  parent)
{ 
return new PythonQtShell_QSettings(parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(format, scope, organization, application, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Scope  scope, QObject*  parent)
{ 
return new PythonQtShell_QSettings(scope, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(scope, organization, application, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent)
{ 
return new PythonQtShell_QSettings(fileName, format, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(organization, application, parent); }

const QMetaObject* PythonQtShell_QSettings::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSettings::staticMetaObject);
  } else {
    return &QSettings::staticMetaObject;
  }
}
int PythonQtShell_QSettings::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSettings::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QStringList  PythonQtWrapper_QSettings::allKeys(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->allKeys());
}

QString  PythonQtWrapper_QSettings::applicationName(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->applicationName());
}

void PythonQtWrapper_QSettings::beginGroup(QSettings* theWrappedObject, const QString&  prefix)
{
  ( theWrappedObject->beginGroup(prefix));
}

int  PythonQtWrapper_QSettings::beginReadArray(QSettings* theWrappedObject, const QString&  prefix)
{
  return ( theWrappedObject->beginReadArray(prefix));
}

void PythonQtWrapper_QSettings::beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size)
{
  ( theWrappedObject->beginWriteArray(prefix, size));
}

QStringList  PythonQtWrapper_QSettings::childGroups(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->childGroups());
}

QStringList  PythonQtWrapper_QSettings::childKeys(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->childKeys());
}

void PythonQtWrapper_QSettings::clear(QSettings* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QSettings::contains(QSettings* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->contains(key));
}

QSettings::Format  PythonQtWrapper_QSettings::static_QSettings_defaultFormat()
{
  return (QSettings::defaultFormat());
}

void PythonQtWrapper_QSettings::endArray(QSettings* theWrappedObject)
{
  ( theWrappedObject->endArray());
}

void PythonQtWrapper_QSettings::endGroup(QSettings* theWrappedObject)
{
  ( theWrappedObject->endGroup());
}

bool  PythonQtWrapper_QSettings::fallbacksEnabled(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->fallbacksEnabled());
}

QString  PythonQtWrapper_QSettings::fileName(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QSettings::Format  PythonQtWrapper_QSettings::format(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QString  PythonQtWrapper_QSettings::group(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

QTextCodec*  PythonQtWrapper_QSettings::iniCodec(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->iniCodec());
}

bool  PythonQtWrapper_QSettings::isAtomicSyncRequired(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->isAtomicSyncRequired());
}

bool  PythonQtWrapper_QSettings::isWritable(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QString  PythonQtWrapper_QSettings::organizationName(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->organizationName());
}

void PythonQtWrapper_QSettings::remove(QSettings* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->remove(key));
}

QSettings::Scope  PythonQtWrapper_QSettings::scope(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->scope());
}

void PythonQtWrapper_QSettings::setArrayIndex(QSettings* theWrappedObject, int  i)
{
  ( theWrappedObject->setArrayIndex(i));
}

void PythonQtWrapper_QSettings::setAtomicSyncRequired(QSettings* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setAtomicSyncRequired(enable));
}

void PythonQtWrapper_QSettings::static_QSettings_setDefaultFormat(QSettings::Format  format)
{
  (QSettings::setDefaultFormat(format));
}

void PythonQtWrapper_QSettings::setFallbacksEnabled(QSettings* theWrappedObject, bool  b)
{
  ( theWrappedObject->setFallbacksEnabled(b));
}

void PythonQtWrapper_QSettings::setIniCodec(QSettings* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setIniCodec(codec));
}

void PythonQtWrapper_QSettings::setIniCodec(QSettings* theWrappedObject, const char*  codecName)
{
  ( theWrappedObject->setIniCodec(codecName));
}

void PythonQtWrapper_QSettings::static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path)
{
  (QSettings::setPath(format, scope, path));
}

void PythonQtWrapper_QSettings::setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value)
{
  ( theWrappedObject->setValue(key, value));
}

QSettings::Status  PythonQtWrapper_QSettings::status(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

void PythonQtWrapper_QSettings::sync(QSettings* theWrappedObject)
{
  ( theWrappedObject->sync());
}

QVariant  PythonQtWrapper_QSettings::value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue) const
{
  return ( theWrappedObject->value(key, defaultValue));
}



PythonQtShell_QSharedMemory::~PythonQtShell_QSharedMemory() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSharedMemory::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSharedMemory::childEvent(event0);
}
void PythonQtShell_QSharedMemory::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSharedMemory::customEvent(event0);
}
bool  PythonQtShell_QSharedMemory::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSharedMemory::event(event0);
}
bool  PythonQtShell_QSharedMemory::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSharedMemory::eventFilter(watched0, event1);
}
void PythonQtShell_QSharedMemory::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSharedMemory::timerEvent(event0);
}
QSharedMemory* PythonQtWrapper_QSharedMemory::new_QSharedMemory(QObject*  parent)
{ 
return new PythonQtShell_QSharedMemory(parent); }

QSharedMemory* PythonQtWrapper_QSharedMemory::new_QSharedMemory(const QString&  key, QObject*  parent)
{ 
return new PythonQtShell_QSharedMemory(key, parent); }

const QMetaObject* PythonQtShell_QSharedMemory::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSharedMemory::staticMetaObject);
  } else {
    return &QSharedMemory::staticMetaObject;
  }
}
int PythonQtShell_QSharedMemory::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSharedMemory::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QSharedMemory::attach(QSharedMemory* theWrappedObject, QSharedMemory::AccessMode  mode)
{
  return ( theWrappedObject->attach(mode));
}

const void*  PythonQtWrapper_QSharedMemory::constData(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->constData());
}

bool  PythonQtWrapper_QSharedMemory::create(QSharedMemory* theWrappedObject, int  size, QSharedMemory::AccessMode  mode)
{
  return ( theWrappedObject->create(size, mode));
}

void*  PythonQtWrapper_QSharedMemory::data(QSharedMemory* theWrappedObject)
{
  return ( theWrappedObject->data());
}

const void*  PythonQtWrapper_QSharedMemory::data(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

QSharedMemory::SharedMemoryError  PythonQtWrapper_QSharedMemory::error(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QSharedMemory::errorString(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QSharedMemory::isAttached(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->isAttached());
}

QString  PythonQtWrapper_QSharedMemory::key(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

bool  PythonQtWrapper_QSharedMemory::lock(QSharedMemory* theWrappedObject)
{
  return ( theWrappedObject->lock());
}

QString  PythonQtWrapper_QSharedMemory::nativeKey(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->nativeKey());
}

void PythonQtWrapper_QSharedMemory::setKey(QSharedMemory* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->setKey(key));
}

void PythonQtWrapper_QSharedMemory::setNativeKey(QSharedMemory* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->setNativeKey(key));
}

int  PythonQtWrapper_QSharedMemory::size(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

bool  PythonQtWrapper_QSharedMemory::unlock(QSharedMemory* theWrappedObject)
{
  return ( theWrappedObject->unlock());
}



QSignalBlocker* PythonQtWrapper_QSignalBlocker::new_QSignalBlocker(QObject&  o)
{ 
return new QSignalBlocker(o); }

QSignalBlocker* PythonQtWrapper_QSignalBlocker::new_QSignalBlocker(QObject*  o)
{ 
return new QSignalBlocker(o); }

void PythonQtWrapper_QSignalBlocker::reblock(QSignalBlocker* theWrappedObject)
{
  ( theWrappedObject->reblock());
}

void PythonQtWrapper_QSignalBlocker::unblock(QSignalBlocker* theWrappedObject)
{
  ( theWrappedObject->unblock());
}



PythonQtShell_QSignalMapper::~PythonQtShell_QSignalMapper() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSignalMapper::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSignalMapper::childEvent(event0);
}
void PythonQtShell_QSignalMapper::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSignalMapper::customEvent(event0);
}
bool  PythonQtShell_QSignalMapper::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSignalMapper::event(event0);
}
bool  PythonQtShell_QSignalMapper::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSignalMapper::eventFilter(watched0, event1);
}
void PythonQtShell_QSignalMapper::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSignalMapper::timerEvent(event0);
}
QSignalMapper* PythonQtWrapper_QSignalMapper::new_QSignalMapper(QObject*  parent)
{ 
return new PythonQtShell_QSignalMapper(parent); }

const QMetaObject* PythonQtShell_QSignalMapper::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSignalMapper::staticMetaObject);
  } else {
    return &QSignalMapper::staticMetaObject;
  }
}
int PythonQtShell_QSignalMapper::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSignalMapper::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, QObject*  object) const
{
  return ( theWrappedObject->mapping(object));
}

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, QWidget*  widget) const
{
  return ( theWrappedObject->mapping(widget));
}

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->mapping(text));
}

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, int  id) const
{
  return ( theWrappedObject->mapping(id));
}

void PythonQtWrapper_QSignalMapper::removeMappings(QSignalMapper* theWrappedObject, QObject*  sender)
{
  ( theWrappedObject->removeMappings(sender));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object)
{
  ( theWrappedObject->setMapping(sender, object));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QWidget*  widget)
{
  ( theWrappedObject->setMapping(sender, widget));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text)
{
  ( theWrappedObject->setMapping(sender, text));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id)
{
  ( theWrappedObject->setMapping(sender, id));
}



PythonQtShell_QSignalTransition::~PythonQtShell_QSignalTransition() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSignalTransition::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSignalTransition::childEvent(event0);
}
void PythonQtShell_QSignalTransition::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSignalTransition::customEvent(event0);
}
bool  PythonQtShell_QSignalTransition::event(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSignalTransition::event(e0);
}
bool  PythonQtShell_QSignalTransition::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSignalTransition::eventFilter(watched0, event1);
}
bool  PythonQtShell_QSignalTransition::eventTest(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventTest");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventTest", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSignalTransition::eventTest(event0);
}
void PythonQtShell_QSignalTransition::onTransition(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("onTransition");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSignalTransition::onTransition(event0);
}
void PythonQtShell_QSignalTransition::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSignalTransition::timerEvent(event0);
}
QSignalTransition* PythonQtWrapper_QSignalTransition::new_QSignalTransition(QState*  sourceState)
{ 
return new PythonQtShell_QSignalTransition(sourceState); }

QSignalTransition* PythonQtWrapper_QSignalTransition::new_QSignalTransition(const QObject*  sender, const char*  signal, QState*  sourceState)
{ 
return new PythonQtShell_QSignalTransition(sender, signal, sourceState); }

const QMetaObject* PythonQtShell_QSignalTransition::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSignalTransition::staticMetaObject);
  } else {
    return &QSignalTransition::staticMetaObject;
  }
}
int PythonQtShell_QSignalTransition::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSignalTransition::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QObject*  PythonQtWrapper_QSignalTransition::senderObject(QSignalTransition* theWrappedObject) const
{
  return ( theWrappedObject->senderObject());
}

void PythonQtWrapper_QSignalTransition::setSenderObject(QSignalTransition* theWrappedObject, const QObject*  sender)
{
  ( theWrappedObject->setSenderObject(sender));
}

void PythonQtWrapper_QSignalTransition::setSignal(QSignalTransition* theWrappedObject, const QByteArray&  signal)
{
  ( theWrappedObject->setSignal(signal));
}

QByteArray  PythonQtWrapper_QSignalTransition::signal(QSignalTransition* theWrappedObject) const
{
  return ( theWrappedObject->signal());
}


