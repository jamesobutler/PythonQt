#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qdatetime.h>
#include <qdeadlinetimer.h>
#include <qdir.h>
#include <qeasingcurve.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qmutex.h>
#include <qobject.h>
#include <qoperatingsystemversion.h>
#include <qpair.h>
#include <qparallelanimationgroup.h>
#include <qpauseanimation.h>
#include <qprocess.h>
#include <qpropertyanimation.h>
#include <qrandom.h>
#include <qreadwritelock.h>
#include <qregularexpression.h>
#include <qresource.h>
#include <qsavefile.h>
#include <qsemaphore.h>
#include <qsequentialanimationgroup.h>
#include <qsettings.h>
#include <qsharedmemory.h>
#include <qsignalmapper.h>
#include <qsocketnotifier.h>
#include <qstandardpaths.h>
#include <qstorageinfo.h>
#include <qstringmatcher.h>
#include <qthread.h>



class PythonQtWrapper_QModelRoleDataSpan : public QObject
{ Q_OBJECT
public:
public slots:
QModelRoleDataSpan* new_QModelRoleDataSpan();
QModelRoleDataSpan* new_QModelRoleDataSpan(QModelRoleData&  modelRoleData);
QModelRoleDataSpan* new_QModelRoleDataSpan(QModelRoleData*  modelRoleData, qsizetype  len);
QModelRoleDataSpan* new_QModelRoleDataSpan(const QModelRoleDataSpan& other) {
QModelRoleDataSpan* a = new QModelRoleDataSpan();
*((QModelRoleDataSpan*)a) = other;
return a; }
void delete_QModelRoleDataSpan(QModelRoleDataSpan* obj) { delete obj; }
   QModelRoleData*  begin(QModelRoleDataSpan* theWrappedObject) const;
   QModelRoleData*  data(QModelRoleDataSpan* theWrappedObject) const;
   QVariant*  dataForRole(QModelRoleDataSpan* theWrappedObject, int  role) const;
   QModelRoleData*  end(QModelRoleDataSpan* theWrappedObject) const;
   qsizetype  length(QModelRoleDataSpan* theWrappedObject) const;
   QModelRoleData*  operator_subscript(QModelRoleDataSpan* theWrappedObject, qsizetype  index) const;
   qsizetype  size(QModelRoleDataSpan* theWrappedObject) const;
};





class PythonQtWrapper_QMutex : public QObject
{ Q_OBJECT
public:
public slots:
QMutex* new_QMutex();
void delete_QMutex(QMutex* obj) { delete obj; }
   bool  tryLock(QMutex* theWrappedObject, QDeadlineTimer  timeout);
   bool  tryLock(QMutex* theWrappedObject, int  timeout);
   bool  try_lock(QMutex* theWrappedObject);
};





class PythonQtShell_QObject : public QObject
{
public:
    PythonQtShell_QObject(QObject*  parent = nullptr):QObject(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QObject() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QObject : public QObject
{ public:
inline void promoted_childEvent(QChildEvent*  event) { this->childEvent(event); }
inline void promoted_customEvent(QEvent*  event) { this->customEvent(event); }
inline bool  promoted_isSignalConnected(const QMetaMethod&  signal) const { return this->isSignalConnected(signal); }
inline QObject*  promoted_sender() const { return this->sender(); }
inline int  promoted_senderSignalIndex() const { return this->senderSignalIndex(); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void py_q_childEvent(QChildEvent*  event) { QObject::childEvent(event); }
inline void py_q_customEvent(QEvent*  event) { QObject::customEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QObject::event(event); }
inline bool  py_q_eventFilter(QObject*  watched, QEvent*  event) { return QObject::eventFilter(watched, event); }
inline void py_q_timerEvent(QTimerEvent*  event) { QObject::timerEvent(event); }
};

class PythonQtWrapper_QObject : public QObject
{ Q_OBJECT
public:
public slots:
QObject* new_QObject(QObject*  parent = nullptr);
void delete_QObject(QObject* obj) { delete obj; }
   bool  blockSignals(QObject* theWrappedObject, bool  b);
   void childEvent(QObject* theWrappedObject, QChildEvent*  event);
   void py_q_childEvent(QObject* theWrappedObject, QChildEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_childEvent(event));}
   const QList<QObject* >*  children(QObject* theWrappedObject) const;
   void customEvent(QObject* theWrappedObject, QEvent*  event);
   void py_q_customEvent(QObject* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_customEvent(event));}
   void dumpObjectInfo(QObject* theWrappedObject) const;
   void dumpObjectTree(QObject* theWrappedObject) const;
   QList<QByteArray >  dynamicPropertyNames(QObject* theWrappedObject) const;
   bool  event(QObject* theWrappedObject, QEvent*  event);
   bool  py_q_event(QObject* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_event(event));}
   bool  eventFilter(QObject* theWrappedObject, QObject*  watched, QEvent*  event);
   bool  py_q_eventFilter(QObject* theWrappedObject, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_eventFilter(watched, event));}
   void installEventFilter(QObject* theWrappedObject, QObject*  filterObj);
   bool  isQuickItemType(QObject* theWrappedObject) const;
   bool  isSignalConnected(QObject* theWrappedObject, const QMetaMethod&  signal) const;
   bool  isWidgetType(QObject* theWrappedObject) const;
   bool  isWindowType(QObject* theWrappedObject) const;
   void killTimer(QObject* theWrappedObject, int  id);
   void moveToThread(QObject* theWrappedObject, QThread*  thread);
   QString  objectName(QObject* theWrappedObject) const;
   void removeEventFilter(QObject* theWrappedObject, QObject*  obj);
   QObject*  sender(QObject* theWrappedObject) const;
   int  senderSignalIndex(QObject* theWrappedObject) const;
   void setObjectName(QObject* theWrappedObject, QAnyStringView  name);
   bool  signalsBlocked(QObject* theWrappedObject) const;
   int  startTimer(QObject* theWrappedObject, int  interval, Qt::TimerType  timerType = Qt::CoarseTimer);
   QThread*  thread(QObject* theWrappedObject) const;
   void timerEvent(QObject* theWrappedObject, QTimerEvent*  event);
   void py_q_timerEvent(QObject* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_timerEvent(event));}
};





class PythonQtShell_QOperatingSystemVersion : public QOperatingSystemVersion
{
public:
    PythonQtShell_QOperatingSystemVersion(QOperatingSystemVersion::OSType  osType, int  vmajor, int  vminor = -1, int  vmicro = -1):QOperatingSystemVersion(osType, vmajor, vminor, vmicro),_wrapper(nullptr) {};
    PythonQtShell_QOperatingSystemVersion(const QOperatingSystemVersionBase&  osversion):QOperatingSystemVersion(osversion),_wrapper(nullptr) {};

   ~PythonQtShell_QOperatingSystemVersion();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOperatingSystemVersion : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OSType )
enum OSType{
  Unknown = QOperatingSystemVersion::Unknown,   Windows = QOperatingSystemVersion::Windows,   MacOS = QOperatingSystemVersion::MacOS,   IOS = QOperatingSystemVersion::IOS,   TvOS = QOperatingSystemVersion::TvOS,   WatchOS = QOperatingSystemVersion::WatchOS,   Android = QOperatingSystemVersion::Android};
public slots:
QOperatingSystemVersion* new_QOperatingSystemVersion(QOperatingSystemVersion::OSType  osType, int  vmajor, int  vminor = -1, int  vmicro = -1);
QOperatingSystemVersion* new_QOperatingSystemVersion(const QOperatingSystemVersionBase&  osversion);
void delete_QOperatingSystemVersion(QOperatingSystemVersion* obj) { delete obj; }
   QOperatingSystemVersion  static_QOperatingSystemVersion_current();
   QOperatingSystemVersion::OSType  static_QOperatingSystemVersion_currentType();
   int  majorVersion(QOperatingSystemVersion* theWrappedObject) const;
   int  microVersion(QOperatingSystemVersion* theWrappedObject) const;
   int  minorVersion(QOperatingSystemVersion* theWrappedObject) const;
   QString  name(QOperatingSystemVersion* theWrappedObject) const;
   int  segmentCount(QOperatingSystemVersion* theWrappedObject) const;
   QOperatingSystemVersion::OSType  type(QOperatingSystemVersion* theWrappedObject) const;
    QString py_toString(QOperatingSystemVersion*);
};





class PythonQtShell_QOperatingSystemVersionBase : public QOperatingSystemVersionBase
{
public:
    PythonQtShell_QOperatingSystemVersionBase():QOperatingSystemVersionBase(),_wrapper(nullptr) {};
    PythonQtShell_QOperatingSystemVersionBase(QOperatingSystemVersionBase::OSType  osType, int  vmajor, int  vminor = -1, int  vmicro = -1):QOperatingSystemVersionBase(osType, vmajor, vminor, vmicro),_wrapper(nullptr) {};

   ~PythonQtShell_QOperatingSystemVersionBase();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QOperatingSystemVersionBase : public QOperatingSystemVersionBase
{ public:
static inline int  promoted_compare(QOperatingSystemVersionBase  v1, QOperatingSystemVersionBase  v2) { return compare(v1, v2); }
};

class PythonQtWrapper_QOperatingSystemVersionBase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OSType )
enum OSType{
  Unknown = QOperatingSystemVersionBase::Unknown,   Windows = QOperatingSystemVersionBase::Windows,   MacOS = QOperatingSystemVersionBase::MacOS,   IOS = QOperatingSystemVersionBase::IOS,   TvOS = QOperatingSystemVersionBase::TvOS,   WatchOS = QOperatingSystemVersionBase::WatchOS,   Android = QOperatingSystemVersionBase::Android};
public slots:
QOperatingSystemVersionBase* new_QOperatingSystemVersionBase();
QOperatingSystemVersionBase* new_QOperatingSystemVersionBase(QOperatingSystemVersionBase::OSType  osType, int  vmajor, int  vminor = -1, int  vmicro = -1);
void delete_QOperatingSystemVersionBase(QOperatingSystemVersionBase* obj) { delete obj; }
   int  static_QOperatingSystemVersionBase_compare(QOperatingSystemVersionBase  v1, QOperatingSystemVersionBase  v2);
   QOperatingSystemVersionBase  static_QOperatingSystemVersionBase_current();
   QOperatingSystemVersionBase::OSType  static_QOperatingSystemVersionBase_currentType();
   int  majorVersion(QOperatingSystemVersionBase* theWrappedObject) const;
   int  microVersion(QOperatingSystemVersionBase* theWrappedObject) const;
   int  minorVersion(QOperatingSystemVersionBase* theWrappedObject) const;
   QString  name(QOperatingSystemVersionBase* theWrappedObject) const;
   QString  static_QOperatingSystemVersionBase_name(QOperatingSystemVersionBase  osversion);
   bool  __lt__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs);
   bool  __le__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs);
   bool  __gt__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs);
   bool  __ge__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs);
   int  segmentCount(QOperatingSystemVersionBase* theWrappedObject) const;
   QOperatingSystemVersionBase::OSType  type(QOperatingSystemVersionBase* theWrappedObject) const;
};





class PythonQtShell_QParallelAnimationGroup : public QParallelAnimationGroup
{
public:
    PythonQtShell_QParallelAnimationGroup(QObject*  parent = nullptr):QParallelAnimationGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QParallelAnimationGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  currentTime) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QParallelAnimationGroup : public QParallelAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentTime(int  currentTime) { this->updateCurrentTime(currentTime); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { this->updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QParallelAnimationGroup::duration(); }
inline bool  py_q_event(QEvent*  event) { return QParallelAnimationGroup::event(event); }
inline void py_q_updateCurrentTime(int  currentTime) { QParallelAnimationGroup::updateCurrentTime(currentTime); }
inline void py_q_updateDirection(QAbstractAnimation::Direction  direction) { QParallelAnimationGroup::updateDirection(direction); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QParallelAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QParallelAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QParallelAnimationGroup* new_QParallelAnimationGroup(QObject*  parent = nullptr);
void delete_QParallelAnimationGroup(QParallelAnimationGroup* obj) { delete obj; }
   int  py_q_duration(QParallelAnimationGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QParallelAnimationGroup* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_event(event));}
   void py_q_updateCurrentTime(QParallelAnimationGroup* theWrappedObject, int  currentTime){  (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_updateCurrentTime(currentTime));}
   void py_q_updateDirection(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction){  (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_updateDirection(direction));}
   void py_q_updateState(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtShell_QPauseAnimation : public QPauseAnimation
{
public:
    PythonQtShell_QPauseAnimation(QObject*  parent = nullptr):QPauseAnimation(parent),_wrapper(nullptr) {};
    PythonQtShell_QPauseAnimation(int  msecs, QObject*  parent = nullptr):QPauseAnimation(msecs, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPauseAnimation() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPauseAnimation : public QPauseAnimation
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline int  py_q_duration() const { return QPauseAnimation::duration(); }
inline bool  py_q_event(QEvent*  e) { return QPauseAnimation::event(e); }
inline void py_q_updateCurrentTime(int  arg__1) { QPauseAnimation::updateCurrentTime(arg__1); }
};

class PythonQtWrapper_QPauseAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QPauseAnimation* new_QPauseAnimation(QObject*  parent = nullptr);
QPauseAnimation* new_QPauseAnimation(int  msecs, QObject*  parent = nullptr);
void delete_QPauseAnimation(QPauseAnimation* obj) { delete obj; }
   int  py_q_duration(QPauseAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QPauseAnimation* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->py_q_event(e));}
   void setDuration(QPauseAnimation* theWrappedObject, int  msecs);
   void py_q_updateCurrentTime(QPauseAnimation* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
};





class PythonQtWrapper_QPersistentModelIndex : public QObject
{ Q_OBJECT
public:
public slots:
QPersistentModelIndex* new_QPersistentModelIndex();
QPersistentModelIndex* new_QPersistentModelIndex(const QModelIndex&  index);
QPersistentModelIndex* new_QPersistentModelIndex(const QPersistentModelIndex&  other);
void delete_QPersistentModelIndex(QPersistentModelIndex* obj) { delete obj; }
   int  column(QPersistentModelIndex* theWrappedObject) const;
   const void*  constInternalPointer(QPersistentModelIndex* theWrappedObject) const;
   QVariant  data(QPersistentModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   Qt::ItemFlags  flags(QPersistentModelIndex* theWrappedObject) const;
   quintptr  internalId(QPersistentModelIndex* theWrappedObject) const;
   bool  isValid(QPersistentModelIndex* theWrappedObject) const;
   const QAbstractItemModel*  model(QPersistentModelIndex* theWrappedObject) const;
   void multiData(QPersistentModelIndex* theWrappedObject, QModelRoleDataSpan  roleDataSpan) const;
   QModelIndex  operator_cast_QModelIndex(QPersistentModelIndex* theWrappedObject) const;
   bool  __ne__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  __ne__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const;
   bool  __lt__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const;
   bool  __eq__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  __eq__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const;
   QModelIndex  parent(QPersistentModelIndex* theWrappedObject) const;
   int  row(QPersistentModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QPersistentModelIndex* theWrappedObject, int  row, int  column) const;
   void swap(QPersistentModelIndex* theWrappedObject, QPersistentModelIndex&  other);
    QString py_toString(QPersistentModelIndex*);
    bool __nonzero__(QPersistentModelIndex* obj) { return obj->isValid(); }
};





class PythonQtShell_QProcess : public QProcess
{
public:
    PythonQtShell_QProcess(QObject*  parent = nullptr):QProcess(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QProcess() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite) override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  seek(qint64  pos) override;
qint64  size() const override;
qint64  skipData(qint64  maxSize) override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs = 30000) override;
bool  waitForReadyRead(int  msecs = 30000) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QProcess : public QProcess
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline void promoted_setProcessState(QProcess::ProcessState  state) { this->setProcessState(state); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline qint64  py_q_bytesToWrite() const { return QProcess::bytesToWrite(); }
inline void py_q_close() { QProcess::close(); }
inline bool  py_q_isSequential() const { return QProcess::isSequential(); }
inline bool  py_q_open(QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite) { return QProcess::open(mode); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QProcess::readData(data, maxlen); }
inline bool  py_q_waitForBytesWritten(int  msecs = 30000) { return QProcess::waitForBytesWritten(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs = 30000) { return QProcess::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QProcess::writeData(data, len); }
};

class PythonQtWrapper_QProcess : public QObject
{ Q_OBJECT
public:
public slots:
QProcess* new_QProcess(QObject*  parent = nullptr);
void delete_QProcess(QProcess* obj) { delete obj; }
   QStringList  arguments(QProcess* theWrappedObject) const;
   qint64  py_q_bytesToWrite(QProcess* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_bytesToWrite());}
   void py_q_close(QProcess* theWrappedObject){  (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_close());}
   void closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void closeWriteChannel(QProcess* theWrappedObject);
   QStringList  environment(QProcess* theWrappedObject) const;
   QProcess::ProcessError  error(QProcess* theWrappedObject) const;
   int  static_QProcess_execute(const QString&  program, const QStringList&  arguments = {});
   int  exitCode(QProcess* theWrappedObject) const;
   QProcess::ExitStatus  exitStatus(QProcess* theWrappedObject) const;
   QProcess::InputChannelMode  inputChannelMode(QProcess* theWrappedObject) const;
   bool  py_q_isSequential(QProcess* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_isSequential());}
   QString  static_QProcess_nullDevice();
   bool  py_q_open(QProcess* theWrappedObject, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_open(mode));}
   QProcess::ProcessChannelMode  processChannelMode(QProcess* theWrappedObject) const;
   QProcessEnvironment  processEnvironment(QProcess* theWrappedObject) const;
   qint64  processId(QProcess* theWrappedObject) const;
   QString  program(QProcess* theWrappedObject) const;
   QByteArray  readAllStandardError(QProcess* theWrappedObject);
   QByteArray  readAllStandardOutput(QProcess* theWrappedObject);
   QProcess::ProcessChannel  readChannel(QProcess* theWrappedObject) const;
   qint64  py_q_readData(QProcess* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_readData(data, maxlen));}
   void setArguments(QProcess* theWrappedObject, const QStringList&  arguments);
   void setEnvironment(QProcess* theWrappedObject, const QStringList&  environment);
   void setInputChannelMode(QProcess* theWrappedObject, QProcess::InputChannelMode  mode);
   void setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode);
   void setProcessEnvironment(QProcess* theWrappedObject, const QProcessEnvironment&  environment);
   void setProcessState(QProcess* theWrappedObject, QProcess::ProcessState  state);
   void setProgram(QProcess* theWrappedObject, const QString&  program);
   void setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODeviceBase::OpenMode  mode = QIODeviceBase::Truncate);
   void setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName);
   void setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODeviceBase::OpenMode  mode = QIODeviceBase::Truncate);
   void setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination);
   void setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir);
   QStringList  static_QProcess_splitCommand(QStringView  command);
   void start(QProcess* theWrappedObject, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite);
   void start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments = {}, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite);
   void startCommand(QProcess* theWrappedObject, const QString&  command, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments = {}, const QString&  workingDirectory = QString(), qint64*  pid = nullptr);
   bool  startDetached(QProcess* theWrappedObject, qint64*  pid = nullptr);
   QProcess::ProcessState  state(QProcess* theWrappedObject) const;
   QStringList  static_QProcess_systemEnvironment();
   bool  py_q_waitForBytesWritten(QProcess* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForFinished(QProcess* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForReadyRead(QProcess* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   bool  waitForStarted(QProcess* theWrappedObject, int  msecs = 30000);
   QString  workingDirectory(QProcess* theWrappedObject) const;
   qint64  py_q_writeData(QProcess* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QProcessEnvironment : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Initialization )
enum Initialization{
  InheritFromParent = QProcessEnvironment::InheritFromParent};
public slots:
QProcessEnvironment* new_QProcessEnvironment();
QProcessEnvironment* new_QProcessEnvironment(QProcessEnvironment::Initialization  arg__1);
QProcessEnvironment* new_QProcessEnvironment(const QProcessEnvironment&  other);
void delete_QProcessEnvironment(QProcessEnvironment* obj) { delete obj; }
   void clear(QProcessEnvironment* theWrappedObject);
   bool  contains(QProcessEnvironment* theWrappedObject, const QString&  name) const;
   bool  inheritsFromParent(QProcessEnvironment* theWrappedObject) const;
   void insert(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  e);
   void insert(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  value);
   bool  isEmpty(QProcessEnvironment* theWrappedObject) const;
   QStringList  keys(QProcessEnvironment* theWrappedObject) const;
   bool  __ne__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const;
   QProcessEnvironment*  operator_assign(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other);
   bool  __eq__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const;
   void remove(QProcessEnvironment* theWrappedObject, const QString&  name);
   void swap(QProcessEnvironment* theWrappedObject, QProcessEnvironment&  other);
   QProcessEnvironment  static_QProcessEnvironment_systemEnvironment();
   QStringList  toStringList(QProcessEnvironment* theWrappedObject) const;
   QString  value(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  defaultValue = QString()) const;
    bool __nonzero__(QProcessEnvironment* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QPropertyAnimation : public QPropertyAnimation
{
public:
    PythonQtShell_QPropertyAnimation(QObject*  parent = nullptr):QPropertyAnimation(parent),_wrapper(nullptr) {};
    PythonQtShell_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = nullptr):QPropertyAnimation(target, propertyName, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPropertyAnimation() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateCurrentValue(const QVariant&  value) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPropertyAnimation : public QPropertyAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentValue(const QVariant&  value) { this->updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline bool  py_q_event(QEvent*  event) { return QPropertyAnimation::event(event); }
inline void py_q_updateCurrentValue(const QVariant&  value) { QPropertyAnimation::updateCurrentValue(value); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QPropertyAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QPropertyAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QPropertyAnimation* new_QPropertyAnimation(QObject*  parent = nullptr);
QPropertyAnimation* new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = nullptr);
void delete_QPropertyAnimation(QPropertyAnimation* obj) { delete obj; }
   bool  py_q_event(QPropertyAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->py_q_event(event));}
   QByteArray  propertyName(QPropertyAnimation* theWrappedObject) const;
   void setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName);
   void setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target);
   QObject*  targetObject(QPropertyAnimation* theWrappedObject) const;
   void py_q_updateCurrentValue(QPropertyAnimation* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->py_q_updateCurrentValue(value));}
   void py_q_updateState(QPropertyAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtWrapper_QRandomGenerator : public QObject
{ Q_OBJECT
public:
public slots:
QRandomGenerator* new_QRandomGenerator(const QRandomGenerator&  other);
QRandomGenerator* new_QRandomGenerator(const unsigned int*  begin, const unsigned int*  end);
QRandomGenerator* new_QRandomGenerator(const unsigned int*  seedBuffer, qsizetype  len);
QRandomGenerator* new_QRandomGenerator(unsigned int  seedValue = 1);
void delete_QRandomGenerator(QRandomGenerator* obj) { delete obj; }
   double  bounded(QRandomGenerator* theWrappedObject, double  highest);
   int  bounded(QRandomGenerator* theWrappedObject, int  highest);
   int  bounded(QRandomGenerator* theWrappedObject, int  lowest, int  highest);
   qint64  bounded(QRandomGenerator* theWrappedObject, int  lowest, qint64  highest);
   qint64  bounded(QRandomGenerator* theWrappedObject, qint64  highest);
   qint64  bounded(QRandomGenerator* theWrappedObject, qint64  lowest, int  highest);
   qint64  bounded(QRandomGenerator* theWrappedObject, qint64  lowest, qint64  highest);
   quint64  bounded(QRandomGenerator* theWrappedObject, quint64  highest);
   quint64  bounded(QRandomGenerator* theWrappedObject, quint64  lowest, quint64  highest);
   unsigned int  bounded(QRandomGenerator* theWrappedObject, unsigned int  highest);
   unsigned int  bounded(QRandomGenerator* theWrappedObject, unsigned int  lowest, unsigned int  highest);
   void discard(QRandomGenerator* theWrappedObject, quint64  z);
   unsigned int  generate(QRandomGenerator* theWrappedObject);
   void generate(QRandomGenerator* theWrappedObject, unsigned int*  begin, unsigned int*  end);
   quint64  generate64(QRandomGenerator* theWrappedObject);
   double  generateDouble(QRandomGenerator* theWrappedObject);
   QRandomGenerator*  static_QRandomGenerator_global();
   unsigned int  static_QRandomGenerator_max();
   unsigned int  static_QRandomGenerator_min();
   bool  __ne__(QRandomGenerator* theWrappedObject, const QRandomGenerator&  rng2);
   unsigned int  operator_cast_(QRandomGenerator* theWrappedObject);
   QRandomGenerator*  operator_assign(QRandomGenerator* theWrappedObject, const QRandomGenerator&  other);
   QRandomGenerator  static_QRandomGenerator_securelySeeded();
   void seed(QRandomGenerator* theWrappedObject, unsigned int  s = 1);
   QRandomGenerator*  static_QRandomGenerator_system();
};





class PythonQtWrapper_QRandomGenerator64 : public QObject
{ Q_OBJECT
public:
public slots:
QRandomGenerator64* new_QRandomGenerator64(const QRandomGenerator&  other);
QRandomGenerator64* new_QRandomGenerator64(const unsigned int*  begin, const unsigned int*  end);
QRandomGenerator64* new_QRandomGenerator64(const unsigned int*  seedBuffer, qsizetype  len);
QRandomGenerator64* new_QRandomGenerator64(unsigned int  seedValue = 1);
void delete_QRandomGenerator64(QRandomGenerator64* obj) { delete obj; }
   void discard(QRandomGenerator64* theWrappedObject, quint64  z);
   quint64  generate(QRandomGenerator64* theWrappedObject);
   QRandomGenerator64*  static_QRandomGenerator64_global();
   quint64  static_QRandomGenerator64_max();
   quint64  static_QRandomGenerator64_min();
   quint64  operator_cast_(QRandomGenerator64* theWrappedObject);
   QRandomGenerator64  static_QRandomGenerator64_securelySeeded();
   QRandomGenerator64*  static_QRandomGenerator64_system();
};





class PythonQtWrapper_QReadLocker : public QObject
{ Q_OBJECT
public:
public slots:
QReadLocker* new_QReadLocker(QReadWriteLock*  readWriteLock);
void delete_QReadLocker(QReadLocker* obj) { delete obj; }
   QReadWriteLock*  readWriteLock(QReadLocker* theWrappedObject) const;
   void relock(QReadLocker* theWrappedObject);
   void unlock(QReadLocker* theWrappedObject);

    void __enter__(QReadLocker* /*self*/) {}
    void __exit__(QReadLocker* self, PyObject* /*type*/, PyObject* /*value*/, PyObject* /*traceback*/) { self->unlock(); }
    
};





class PythonQtWrapper_QReadWriteLock : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QReadWriteLock::NonRecursive,   Recursive = QReadWriteLock::Recursive};
public slots:
QReadWriteLock* new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode = QReadWriteLock::NonRecursive);
void delete_QReadWriteLock(QReadWriteLock* obj) { delete obj; }
   void lockForRead(QReadWriteLock* theWrappedObject);
   void lockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject, QDeadlineTimer  timeout = {});
   bool  tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject, QDeadlineTimer  timeout = {});
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout);
   void unlock(QReadWriteLock* theWrappedObject);
};





class PythonQtWrapper_QRecursiveMutex : public QObject
{ Q_OBJECT
public:
public slots:
QRecursiveMutex* new_QRecursiveMutex();
void delete_QRecursiveMutex(QRecursiveMutex* obj) { delete obj; }
   void lock(QRecursiveMutex* theWrappedObject);
   bool  tryLock(QRecursiveMutex* theWrappedObject, QDeadlineTimer  timer = {});
   bool  tryLock(QRecursiveMutex* theWrappedObject, int  timeout);
   bool  try_lock(QRecursiveMutex* theWrappedObject);
   void unlock(QRecursiveMutex* theWrappedObject);
};





class PythonQtWrapper_QRegularExpressionMatch : public QObject
{ Q_OBJECT
public:
public slots:
QRegularExpressionMatch* new_QRegularExpressionMatch();
QRegularExpressionMatch* new_QRegularExpressionMatch(const QRegularExpressionMatch&  match);
void delete_QRegularExpressionMatch(QRegularExpressionMatch* obj) { delete obj; }
   QString  captured(QRegularExpressionMatch* theWrappedObject, const QString&  name) const;
   QString  captured(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   qsizetype  capturedEnd(QRegularExpressionMatch* theWrappedObject, const QString&  name) const;
   qsizetype  capturedEnd(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   qsizetype  capturedLength(QRegularExpressionMatch* theWrappedObject, const QString&  name) const;
   qsizetype  capturedLength(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   qsizetype  capturedStart(QRegularExpressionMatch* theWrappedObject, const QString&  name) const;
   qsizetype  capturedStart(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   QStringList  capturedTexts(QRegularExpressionMatch* theWrappedObject) const;
   QStringView  capturedView(QRegularExpressionMatch* theWrappedObject, QStringView  name) const;
   QStringView  capturedView(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   bool  hasCaptured(QRegularExpressionMatch* theWrappedObject, const QString&  name) const;
   bool  hasCaptured(QRegularExpressionMatch* theWrappedObject, int  nth) const;
   bool  hasMatch(QRegularExpressionMatch* theWrappedObject) const;
   bool  hasPartialMatch(QRegularExpressionMatch* theWrappedObject) const;
   bool  isValid(QRegularExpressionMatch* theWrappedObject) const;
   int  lastCapturedIndex(QRegularExpressionMatch* theWrappedObject) const;
   QRegularExpression::MatchOptions  matchOptions(QRegularExpressionMatch* theWrappedObject) const;
   QRegularExpression::MatchType  matchType(QRegularExpressionMatch* theWrappedObject) const;
   QRegularExpressionMatch*  operator_assign(QRegularExpressionMatch* theWrappedObject, const QRegularExpressionMatch&  match);
   QRegularExpression  regularExpression(QRegularExpressionMatch* theWrappedObject) const;
   void swap(QRegularExpressionMatch* theWrappedObject, QRegularExpressionMatch&  other);
    QString py_toString(QRegularExpressionMatch*);
    bool __nonzero__(QRegularExpressionMatch* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QRegularExpressionMatchIterator : public QObject
{ Q_OBJECT
public:
public slots:
QRegularExpressionMatchIterator* new_QRegularExpressionMatchIterator();
QRegularExpressionMatchIterator* new_QRegularExpressionMatchIterator(const QRegularExpressionMatchIterator&  iterator);
void delete_QRegularExpressionMatchIterator(QRegularExpressionMatchIterator* obj) { delete obj; }
   bool  hasNext(QRegularExpressionMatchIterator* theWrappedObject) const;
   bool  isValid(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpression::MatchOptions  matchOptions(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpression::MatchType  matchType(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpressionMatch  next(QRegularExpressionMatchIterator* theWrappedObject);
   QRegularExpressionMatchIterator*  operator_assign(QRegularExpressionMatchIterator* theWrappedObject, const QRegularExpressionMatchIterator&  iterator);
   QRegularExpressionMatch  peekNext(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpression  regularExpression(QRegularExpressionMatchIterator* theWrappedObject) const;
   void swap(QRegularExpressionMatchIterator* theWrappedObject, QRegularExpressionMatchIterator&  other);
    bool __nonzero__(QRegularExpressionMatchIterator* obj) { return obj->isValid(); }
};





class PythonQtShell_QResource : public QResource
{
public:
    PythonQtShell_QResource(const QString&  file = QString(), const QLocale&  locale = QLocale()):QResource(file, locale),_wrapper(nullptr) {};

   ~PythonQtShell_QResource();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QResource : public QResource
{ public:
inline QStringList  promoted_children() const { return this->children(); }
inline bool  promoted_isDir() const { return this->isDir(); }
inline bool  promoted_isFile() const { return this->isFile(); }
};

class PythonQtWrapper_QResource : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Compression )
enum Compression{
  NoCompression = QResource::NoCompression,   ZlibCompression = QResource::ZlibCompression,   ZstdCompression = QResource::ZstdCompression};
public slots:
QResource* new_QResource(const QString&  file = QString(), const QLocale&  locale = QLocale());
void delete_QResource(QResource* obj) { delete obj; }
   QString  absoluteFilePath(QResource* theWrappedObject) const;
   QStringList  children(QResource* theWrappedObject) const;
   QResource::Compression  compressionAlgorithm(QResource* theWrappedObject) const;
   const uchar*  data(QResource* theWrappedObject) const;
   QString  fileName(QResource* theWrappedObject) const;
   bool  isDir(QResource* theWrappedObject) const;
   bool  isFile(QResource* theWrappedObject) const;
   bool  isValid(QResource* theWrappedObject) const;
   QDateTime  lastModified(QResource* theWrappedObject) const;
   QLocale  locale(QResource* theWrappedObject) const;
   bool  static_QResource_registerResource(const QString&  rccFilename, const QString&  resourceRoot = QString());
   bool  static_QResource_registerResource(const uchar*  rccData, const QString&  resourceRoot = QString());
   void setFileName(QResource* theWrappedObject, const QString&  file);
   void setLocale(QResource* theWrappedObject, const QLocale&  locale);
   qint64  size(QResource* theWrappedObject) const;
   QByteArray  uncompressedData(QResource* theWrappedObject) const;
   qint64  uncompressedSize(QResource* theWrappedObject) const;
   bool  static_QResource_unregisterResource(const QString&  rccFilename, const QString&  resourceRoot = QString());
   bool  static_QResource_unregisterResource(const uchar*  rccData, const QString&  resourceRoot = QString());
    bool __nonzero__(QResource* obj) { return obj->isValid(); }
};





class PythonQtShell_QSaveFile : public QSaveFile
{
public:
    PythonQtShell_QSaveFile(QObject*  parent = nullptr):QSaveFile(parent),_wrapper(nullptr) {};
    PythonQtShell_QSaveFile(const QString&  name):QSaveFile(name),_wrapper(nullptr) {};
    PythonQtShell_QSaveFile(const QString&  name, QObject*  parent):QSaveFile(name, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSaveFile() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QString  fileName() const override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  flags) override;
QFileDevice::Permissions  permissions() const override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  resize(qint64  sz) override;
bool  seek(qint64  offset) override;
bool  setPermissions(QFileDevice::Permissions  permissionSpec) override;
qint64  size() const override;
qint64  skipData(qint64  maxSize) override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSaveFile : public QSaveFile
{ public:
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline QString  py_q_fileName() const { return QSaveFile::fileName(); }
inline bool  py_q_open(QIODeviceBase::OpenMode  flags) { return QSaveFile::open(flags); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QSaveFile::writeData(data, len); }
};

class PythonQtWrapper_QSaveFile : public QObject
{ Q_OBJECT
public:
public slots:
QSaveFile* new_QSaveFile(QObject*  parent = nullptr);
QSaveFile* new_QSaveFile(const QString&  name);
QSaveFile* new_QSaveFile(const QString&  name, QObject*  parent);
void delete_QSaveFile(QSaveFile* obj) { delete obj; }
   void cancelWriting(QSaveFile* theWrappedObject);
   bool  commit(QSaveFile* theWrappedObject);
   bool  directWriteFallback(QSaveFile* theWrappedObject) const;
   QString  py_q_fileName(QSaveFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSaveFile*)theWrappedObject)->py_q_fileName());}
   bool  py_q_open(QSaveFile* theWrappedObject, QIODeviceBase::OpenMode  flags){  return (((PythonQtPublicPromoter_QSaveFile*)theWrappedObject)->py_q_open(flags));}
   void setDirectWriteFallback(QSaveFile* theWrappedObject, bool  enabled);
   void setFileName(QSaveFile* theWrappedObject, const QString&  name);
   qint64  py_q_writeData(QSaveFile* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QSaveFile*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public slots:
QSemaphore* new_QSemaphore(int  n = 0);
void delete_QSemaphore(QSemaphore* obj) { delete obj; }
   void acquire(QSemaphore* theWrappedObject, int  n = 1);
   int  available(QSemaphore* theWrappedObject) const;
   void release(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, QDeadlineTimer  timeout);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout);
   bool  try_acquire(QSemaphore* theWrappedObject);
};





class PythonQtShell_QSequentialAnimationGroup : public QSequentialAnimationGroup
{
public:
    PythonQtShell_QSequentialAnimationGroup(QObject*  parent = nullptr):QSequentialAnimationGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSequentialAnimationGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSequentialAnimationGroup : public QSequentialAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { this->updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QSequentialAnimationGroup::duration(); }
inline bool  py_q_event(QEvent*  event) { return QSequentialAnimationGroup::event(event); }
inline void py_q_updateCurrentTime(int  arg__1) { QSequentialAnimationGroup::updateCurrentTime(arg__1); }
inline void py_q_updateDirection(QAbstractAnimation::Direction  direction) { QSequentialAnimationGroup::updateDirection(direction); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QSequentialAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QSequentialAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QSequentialAnimationGroup* new_QSequentialAnimationGroup(QObject*  parent = nullptr);
void delete_QSequentialAnimationGroup(QSequentialAnimationGroup* obj) { delete obj; }
   QPauseAnimation*  addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs);
   QAbstractAnimation*  currentAnimation(QSequentialAnimationGroup* theWrappedObject) const;
   int  py_q_duration(QSequentialAnimationGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QSequentialAnimationGroup* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_event(event));}
   QPauseAnimation*  insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs);
   void py_q_updateCurrentTime(QSequentialAnimationGroup* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
   void py_q_updateDirection(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateDirection(direction));}
   void py_q_updateState(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtShell_QSettings : public QSettings
{
public:
    PythonQtShell_QSettings(QObject*  parent = nullptr):QSettings(parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(format, scope, organization, application, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, QObject*  parent = nullptr):QSettings(scope, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(scope, organization, application, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = nullptr):QSettings(fileName, format, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(organization, application, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSettings() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSettings : public QSettings
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  py_q_event(QEvent*  event) { return QSettings::event(event); }
};

class PythonQtWrapper_QSettings : public QObject
{ Q_OBJECT
public:
public slots:
QSettings* new_QSettings(QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Scope  scope, QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
QSettings* new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = nullptr);
QSettings* new_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
void delete_QSettings(QSettings* obj) { delete obj; }
   QStringList  allKeys(QSettings* theWrappedObject) const;
   QString  applicationName(QSettings* theWrappedObject) const;
   void beginGroup(QSettings* theWrappedObject, QAnyStringView  prefix);
   int  beginReadArray(QSettings* theWrappedObject, QAnyStringView  prefix);
   void beginWriteArray(QSettings* theWrappedObject, QAnyStringView  prefix, int  size = -1);
   QStringList  childGroups(QSettings* theWrappedObject) const;
   QStringList  childKeys(QSettings* theWrappedObject) const;
   void clear(QSettings* theWrappedObject);
   bool  contains(QSettings* theWrappedObject, QAnyStringView  key) const;
   QSettings::Format  static_QSettings_defaultFormat();
   void endArray(QSettings* theWrappedObject);
   void endGroup(QSettings* theWrappedObject);
   bool  py_q_event(QSettings* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSettings*)theWrappedObject)->py_q_event(event));}
   bool  fallbacksEnabled(QSettings* theWrappedObject) const;
   QString  fileName(QSettings* theWrappedObject) const;
   QSettings::Format  format(QSettings* theWrappedObject) const;
   QString  group(QSettings* theWrappedObject) const;
   bool  isAtomicSyncRequired(QSettings* theWrappedObject) const;
   bool  isWritable(QSettings* theWrappedObject) const;
   QString  organizationName(QSettings* theWrappedObject) const;
   void remove(QSettings* theWrappedObject, QAnyStringView  key);
   QSettings::Scope  scope(QSettings* theWrappedObject) const;
   void setArrayIndex(QSettings* theWrappedObject, int  i);
   void setAtomicSyncRequired(QSettings* theWrappedObject, bool  enable);
   void static_QSettings_setDefaultFormat(QSettings::Format  format);
   void setFallbacksEnabled(QSettings* theWrappedObject, bool  b);
   void static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path);
   void setValue(QSettings* theWrappedObject, QAnyStringView  key, const QVariant&  value);
   QSettings::Status  status(QSettings* theWrappedObject) const;
   void sync(QSettings* theWrappedObject);
   QVariant  value(QSettings* theWrappedObject, QAnyStringView  key) const;
   QVariant  value(QSettings* theWrappedObject, QAnyStringView  key, const QVariant&  defaultValue) const;
};





class PythonQtShell_QSharedMemory : public QSharedMemory
{
public:
    PythonQtShell_QSharedMemory(QObject*  parent = nullptr):QSharedMemory(parent),_wrapper(nullptr) {};
    PythonQtShell_QSharedMemory(const QString&  key, QObject*  parent = nullptr):QSharedMemory(key, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSharedMemory() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSharedMemory : public QObject
{ Q_OBJECT
public:
public slots:
QSharedMemory* new_QSharedMemory(QObject*  parent = nullptr);
QSharedMemory* new_QSharedMemory(const QString&  key, QObject*  parent = nullptr);
void delete_QSharedMemory(QSharedMemory* obj) { delete obj; }
   bool  attach(QSharedMemory* theWrappedObject, QSharedMemory::AccessMode  mode = QSharedMemory::ReadWrite);
   const void*  constData(QSharedMemory* theWrappedObject) const;
   bool  create(QSharedMemory* theWrappedObject, qsizetype  size, QSharedMemory::AccessMode  mode = QSharedMemory::ReadWrite);
   void*  data(QSharedMemory* theWrappedObject);
   const void*  data(QSharedMemory* theWrappedObject) const;
   QSharedMemory::SharedMemoryError  error(QSharedMemory* theWrappedObject) const;
   QString  errorString(QSharedMemory* theWrappedObject) const;
   bool  isAttached(QSharedMemory* theWrappedObject) const;
   bool  static_QSharedMemory_isKeyTypeSupported(QNativeIpcKey::Type  type);
   QString  key(QSharedMemory* theWrappedObject) const;
   bool  lock(QSharedMemory* theWrappedObject);
   QString  nativeKey(QSharedMemory* theWrappedObject) const;
   void setKey(QSharedMemory* theWrappedObject, const QString&  key);
   void setNativeKey(QSharedMemory* theWrappedObject, const QString&  key, QNativeIpcKey::Type  type = QNativeIpcKey::legacyDefaultTypeForOs());
   qsizetype  size(QSharedMemory* theWrappedObject) const;
   bool  unlock(QSharedMemory* theWrappedObject);
};





class PythonQtWrapper_QSignalBlocker : public QObject
{ Q_OBJECT
public:
public slots:
QSignalBlocker* new_QSignalBlocker(QObject&  o);
QSignalBlocker* new_QSignalBlocker(QObject*  o);
void delete_QSignalBlocker(QSignalBlocker* obj) { delete obj; }
   void reblock(QSignalBlocker* theWrappedObject);
   void unblock(QSignalBlocker* theWrappedObject);
};





class PythonQtShell_QSignalMapper : public QSignalMapper
{
public:
    PythonQtShell_QSignalMapper(QObject*  parent = nullptr):QSignalMapper(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSignalMapper() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSignalMapper : public QObject
{ Q_OBJECT
public:
public slots:
QSignalMapper* new_QSignalMapper(QObject*  parent = nullptr);
void delete_QSignalMapper(QSignalMapper* obj) { delete obj; }
   QObject*  mapping(QSignalMapper* theWrappedObject, QObject*  object) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, const QString&  text) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, int  id) const;
   void removeMappings(QSignalMapper* theWrappedObject, QObject*  sender);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id);
};





class PythonQtShell_QSocketNotifier : public QSocketNotifier
{
public:
    PythonQtShell_QSocketNotifier(QSocketNotifier::Type  arg__1, QObject*  parent = nullptr):QSocketNotifier(arg__1, parent),_wrapper(nullptr) {};
    PythonQtShell_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr):QSocketNotifier(socket, arg__2, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSocketNotifier() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSocketNotifier : public QSocketNotifier
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QSocketNotifier::event(arg__1); }
};

class PythonQtWrapper_QSocketNotifier : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Read = QSocketNotifier::Read,   Write = QSocketNotifier::Write,   Exception = QSocketNotifier::Exception};
public slots:
QSocketNotifier* new_QSocketNotifier(QSocketNotifier::Type  arg__1, QObject*  parent = nullptr);
QSocketNotifier* new_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr);
void delete_QSocketNotifier(QSocketNotifier* obj) { delete obj; }
   bool  py_q_event(QSocketNotifier* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSocketNotifier*)theWrappedObject)->py_q_event(arg__1));}
   bool  isEnabled(QSocketNotifier* theWrappedObject) const;
   bool  isValid(QSocketNotifier* theWrappedObject) const;
   void setSocket(QSocketNotifier* theWrappedObject, qintptr  socket);
   qintptr  socket(QSocketNotifier* theWrappedObject) const;
   QSocketNotifier::Type  type(QSocketNotifier* theWrappedObject) const;
    bool __nonzero__(QSocketNotifier* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QStandardPaths : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LocateOption StandardLocation )
Q_FLAGS(LocateOptions )
enum LocateOption{
  LocateFile = QStandardPaths::LocateFile,   LocateDirectory = QStandardPaths::LocateDirectory};
enum StandardLocation{
  DesktopLocation = QStandardPaths::DesktopLocation,   DocumentsLocation = QStandardPaths::DocumentsLocation,   FontsLocation = QStandardPaths::FontsLocation,   ApplicationsLocation = QStandardPaths::ApplicationsLocation,   MusicLocation = QStandardPaths::MusicLocation,   MoviesLocation = QStandardPaths::MoviesLocation,   PicturesLocation = QStandardPaths::PicturesLocation,   TempLocation = QStandardPaths::TempLocation,   HomeLocation = QStandardPaths::HomeLocation,   AppLocalDataLocation = QStandardPaths::AppLocalDataLocation,   CacheLocation = QStandardPaths::CacheLocation,   GenericDataLocation = QStandardPaths::GenericDataLocation,   RuntimeLocation = QStandardPaths::RuntimeLocation,   ConfigLocation = QStandardPaths::ConfigLocation,   DownloadLocation = QStandardPaths::DownloadLocation,   GenericCacheLocation = QStandardPaths::GenericCacheLocation,   GenericConfigLocation = QStandardPaths::GenericConfigLocation,   AppDataLocation = QStandardPaths::AppDataLocation,   AppConfigLocation = QStandardPaths::AppConfigLocation,   PublicShareLocation = QStandardPaths::PublicShareLocation,   TemplatesLocation = QStandardPaths::TemplatesLocation};
Q_DECLARE_FLAGS(LocateOptions, LocateOption)
public slots:
   QString  static_QStandardPaths_displayName(QStandardPaths::StandardLocation  type);
   QString  static_QStandardPaths_findExecutable(const QString&  executableName, const QStringList&  paths = QStringList());
   bool  static_QStandardPaths_isTestModeEnabled();
   QString  static_QStandardPaths_locate(QStandardPaths::StandardLocation  type, const QString&  fileName, QStandardPaths::LocateOptions  options = QStandardPaths::LocateFile);
   QStringList  static_QStandardPaths_locateAll(QStandardPaths::StandardLocation  type, const QString&  fileName, QStandardPaths::LocateOptions  options = QStandardPaths::LocateFile);
   void static_QStandardPaths_setTestModeEnabled(bool  testMode);
   QStringList  static_QStandardPaths_standardLocations(QStandardPaths::StandardLocation  type);
   QString  static_QStandardPaths_writableLocation(QStandardPaths::StandardLocation  type);
};





class PythonQtWrapper_QStorageInfo : public QObject
{ Q_OBJECT
public:
public slots:
QStorageInfo* new_QStorageInfo();
QStorageInfo* new_QStorageInfo(const QDir&  dir);
QStorageInfo* new_QStorageInfo(const QStorageInfo&  other);
QStorageInfo* new_QStorageInfo(const QString&  path);
void delete_QStorageInfo(QStorageInfo* obj) { delete obj; }
   int  blockSize(QStorageInfo* theWrappedObject) const;
   qint64  bytesAvailable(QStorageInfo* theWrappedObject) const;
   qint64  bytesFree(QStorageInfo* theWrappedObject) const;
   qint64  bytesTotal(QStorageInfo* theWrappedObject) const;
   QByteArray  device(QStorageInfo* theWrappedObject) const;
   QString  displayName(QStorageInfo* theWrappedObject) const;
   QByteArray  fileSystemType(QStorageInfo* theWrappedObject) const;
   bool  isReadOnly(QStorageInfo* theWrappedObject) const;
   bool  isReady(QStorageInfo* theWrappedObject) const;
   bool  isRoot(QStorageInfo* theWrappedObject) const;
   bool  isValid(QStorageInfo* theWrappedObject) const;
   QList<QStorageInfo >  static_QStorageInfo_mountedVolumes();
   QString  name(QStorageInfo* theWrappedObject) const;
   bool  __ne__(QStorageInfo* theWrappedObject, const QStorageInfo&  second);
   QStorageInfo*  operator_assign(QStorageInfo* theWrappedObject, const QStorageInfo&  other);
   bool  __eq__(QStorageInfo* theWrappedObject, const QStorageInfo&  second);
   void refresh(QStorageInfo* theWrappedObject);
   QStorageInfo  static_QStorageInfo_root();
   QString  rootPath(QStorageInfo* theWrappedObject) const;
   void setPath(QStorageInfo* theWrappedObject, const QString&  path);
   QByteArray  subvolume(QStorageInfo* theWrappedObject) const;
   void swap(QStorageInfo* theWrappedObject, QStorageInfo&  other);
    QString py_toString(QStorageInfo*);
    bool __nonzero__(QStorageInfo* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QStringMatcher* new_QStringMatcher();
QStringMatcher* new_QStringMatcher(const QChar*  uc, qsizetype  len, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; }
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   qsizetype  indexIn(QStringMatcher* theWrappedObject, const QChar*  str, qsizetype  length, qsizetype  from = 0) const;
   qsizetype  indexIn(QStringMatcher* theWrappedObject, const QString&  str, qsizetype  from = 0) const;
   QString  pattern(QStringMatcher* theWrappedObject) const;
   void setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs);
   void setPattern(QStringMatcher* theWrappedObject, const QString&  pattern);
};


