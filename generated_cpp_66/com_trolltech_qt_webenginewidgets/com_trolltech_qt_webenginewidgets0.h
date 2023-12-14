#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qauthenticator.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qnetworkcookie.h>
#include <qobject.h>
#include <qpagelayout.h>
#include <qpageranges.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qsslcertificate.h>
#include <qsslkey.h>
#include <qstyle.h>
#include <qthread.h>
#include <qurl.h>
#include <qwebenginecertificateerror.h>
#include <qwebengineclientcertificatestore.h>
#include <qwebenginecontextmenurequest.h>
#include <qwebenginecookiestore.h>
#include <qwebenginefilesystemaccessrequest.h>
#include <qwebenginefullscreenrequest.h>
#include <qwebenginehistory.h>
#include <qwebengineloadinginfo.h>
#include <qwebenginenavigationrequest.h>
#include <qwebenginenewwindowrequest.h>
#include <qwebenginenotification.h>
#include <qwebenginepage.h>
#include <qwebengineprofile.h>
#include <qwebenginescript.h>
#include <qwebenginescriptcollection.h>
#include <qwebenginesettings.h>
#include <qwebengineurlrequestinfo.h>
#include <qwebengineurlrequestinterceptor.h>
#include <qwebengineurlrequestjob.h>
#include <qwebengineurlschemehandler.h>
#include <qwebengineview.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtWrapper_QWebEngineCertificateError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  SslPinnedKeyNotInCertificateChain = QWebEngineCertificateError::SslPinnedKeyNotInCertificateChain,   CertificateCommonNameInvalid = QWebEngineCertificateError::CertificateCommonNameInvalid,   CertificateDateInvalid = QWebEngineCertificateError::CertificateDateInvalid,   CertificateAuthorityInvalid = QWebEngineCertificateError::CertificateAuthorityInvalid,   CertificateContainsErrors = QWebEngineCertificateError::CertificateContainsErrors,   CertificateNoRevocationMechanism = QWebEngineCertificateError::CertificateNoRevocationMechanism,   CertificateUnableToCheckRevocation = QWebEngineCertificateError::CertificateUnableToCheckRevocation,   CertificateRevoked = QWebEngineCertificateError::CertificateRevoked,   CertificateInvalid = QWebEngineCertificateError::CertificateInvalid,   CertificateWeakSignatureAlgorithm = QWebEngineCertificateError::CertificateWeakSignatureAlgorithm,   CertificateNonUniqueName = QWebEngineCertificateError::CertificateNonUniqueName,   CertificateWeakKey = QWebEngineCertificateError::CertificateWeakKey,   CertificateNameConstraintViolation = QWebEngineCertificateError::CertificateNameConstraintViolation,   CertificateValidityTooLong = QWebEngineCertificateError::CertificateValidityTooLong,   CertificateTransparencyRequired = QWebEngineCertificateError::CertificateTransparencyRequired,   CertificateSymantecLegacy = QWebEngineCertificateError::CertificateSymantecLegacy,   CertificateKnownInterceptionBlocked = QWebEngineCertificateError::CertificateKnownInterceptionBlocked,   SslObsoleteVersion = QWebEngineCertificateError::SslObsoleteVersion};
public slots:
QWebEngineCertificateError* new_QWebEngineCertificateError(const QWebEngineCertificateError&  other);
void delete_QWebEngineCertificateError(QWebEngineCertificateError* obj) { delete obj; }
   void acceptCertificate(QWebEngineCertificateError* theWrappedObject);
   QList<QSslCertificate >  certificateChain(QWebEngineCertificateError* theWrappedObject) const;
   void defer(QWebEngineCertificateError* theWrappedObject);
   QString  description(QWebEngineCertificateError* theWrappedObject) const;
   bool  isOverridable(QWebEngineCertificateError* theWrappedObject) const;
   QWebEngineCertificateError*  operator_assign(QWebEngineCertificateError* theWrappedObject, const QWebEngineCertificateError&  other);
   void rejectCertificate(QWebEngineCertificateError* theWrappedObject);
   QWebEngineCertificateError::Type  type(QWebEngineCertificateError* theWrappedObject) const;
   QUrl  url(QWebEngineCertificateError* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineClientCertificateStore : public QObject
{ Q_OBJECT
public:
public slots:
   void add(QWebEngineClientCertificateStore* theWrappedObject, const QSslCertificate&  certificate, const QSslKey&  privateKey);
   QList<QSslCertificate >  certificates(QWebEngineClientCertificateStore* theWrappedObject) const;
   void clear(QWebEngineClientCertificateStore* theWrappedObject);
   void remove(QWebEngineClientCertificateStore* theWrappedObject, const QSslCertificate&  certificate);
};





class PythonQtWrapper_QWebEngineContextMenuRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EditFlag MediaFlag )
Q_FLAGS(EditFlags MediaFlags )
enum EditFlag{
  CanUndo = QWebEngineContextMenuRequest::CanUndo,   CanRedo = QWebEngineContextMenuRequest::CanRedo,   CanCut = QWebEngineContextMenuRequest::CanCut,   CanCopy = QWebEngineContextMenuRequest::CanCopy,   CanPaste = QWebEngineContextMenuRequest::CanPaste,   CanDelete = QWebEngineContextMenuRequest::CanDelete,   CanSelectAll = QWebEngineContextMenuRequest::CanSelectAll,   CanTranslate = QWebEngineContextMenuRequest::CanTranslate,   CanEditRichly = QWebEngineContextMenuRequest::CanEditRichly};
enum MediaFlag{
  MediaInError = QWebEngineContextMenuRequest::MediaInError,   MediaPaused = QWebEngineContextMenuRequest::MediaPaused,   MediaMuted = QWebEngineContextMenuRequest::MediaMuted,   MediaLoop = QWebEngineContextMenuRequest::MediaLoop,   MediaCanSave = QWebEngineContextMenuRequest::MediaCanSave,   MediaHasAudio = QWebEngineContextMenuRequest::MediaHasAudio,   MediaCanToggleControls = QWebEngineContextMenuRequest::MediaCanToggleControls,   MediaControls = QWebEngineContextMenuRequest::MediaControls,   MediaCanPrint = QWebEngineContextMenuRequest::MediaCanPrint,   MediaCanRotate = QWebEngineContextMenuRequest::MediaCanRotate};
Q_DECLARE_FLAGS(EditFlags, EditFlag)
Q_DECLARE_FLAGS(MediaFlags, MediaFlag)
public slots:
void delete_QWebEngineContextMenuRequest(QWebEngineContextMenuRequest* obj) { delete obj; }
   QWebEngineContextMenuRequest::EditFlags  editFlags(QWebEngineContextMenuRequest* theWrappedObject) const;
   bool  isAccepted(QWebEngineContextMenuRequest* theWrappedObject) const;
   bool  isContentEditable(QWebEngineContextMenuRequest* theWrappedObject) const;
   QString  linkText(QWebEngineContextMenuRequest* theWrappedObject) const;
   QUrl  linkUrl(QWebEngineContextMenuRequest* theWrappedObject) const;
   QWebEngineContextMenuRequest::MediaFlags  mediaFlags(QWebEngineContextMenuRequest* theWrappedObject) const;
   QWebEngineContextMenuRequest::MediaType  mediaType(QWebEngineContextMenuRequest* theWrappedObject) const;
   QUrl  mediaUrl(QWebEngineContextMenuRequest* theWrappedObject) const;
   QString  misspelledWord(QWebEngineContextMenuRequest* theWrappedObject) const;
   QPoint  position(QWebEngineContextMenuRequest* theWrappedObject) const;
   QString  selectedText(QWebEngineContextMenuRequest* theWrappedObject) const;
   void setAccepted(QWebEngineContextMenuRequest* theWrappedObject, bool  accepted);
   QStringList  spellCheckerSuggestions(QWebEngineContextMenuRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineCookieStore : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineCookieStore(QWebEngineCookieStore* obj) { delete obj; }
   void deleteAllCookies(QWebEngineCookieStore* theWrappedObject);
   void deleteCookie(QWebEngineCookieStore* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  origin = QUrl());
   void deleteSessionCookies(QWebEngineCookieStore* theWrappedObject);
   void loadAllCookies(QWebEngineCookieStore* theWrappedObject);
   void setCookie(QWebEngineCookieStore* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  origin = QUrl());
};





class PythonQtWrapper_QWebEngineFileSystemAccessRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AccessFlag HandleType )
Q_FLAGS(AccessFlags )
enum AccessFlag{
  Read = QWebEngineFileSystemAccessRequest::Read,   Write = QWebEngineFileSystemAccessRequest::Write};
enum HandleType{
  File = QWebEngineFileSystemAccessRequest::File,   Directory = QWebEngineFileSystemAccessRequest::Directory};
Q_DECLARE_FLAGS(AccessFlags, AccessFlag)
public slots:
QWebEngineFileSystemAccessRequest* new_QWebEngineFileSystemAccessRequest(const QWebEngineFileSystemAccessRequest&  other);
void delete_QWebEngineFileSystemAccessRequest(QWebEngineFileSystemAccessRequest* obj) { delete obj; }
   void accept(QWebEngineFileSystemAccessRequest* theWrappedObject);
   QWebEngineFileSystemAccessRequest::AccessFlags  accessFlags(QWebEngineFileSystemAccessRequest* theWrappedObject) const;
   QUrl  filePath(QWebEngineFileSystemAccessRequest* theWrappedObject) const;
   QWebEngineFileSystemAccessRequest::HandleType  handleType(QWebEngineFileSystemAccessRequest* theWrappedObject) const;
   bool  __ne__(QWebEngineFileSystemAccessRequest* theWrappedObject, const QWebEngineFileSystemAccessRequest&  rhs);
   QWebEngineFileSystemAccessRequest*  operator_assign(QWebEngineFileSystemAccessRequest* theWrappedObject, const QWebEngineFileSystemAccessRequest&  other);
   bool  __eq__(QWebEngineFileSystemAccessRequest* theWrappedObject, const QWebEngineFileSystemAccessRequest&  rhs);
   QUrl  origin(QWebEngineFileSystemAccessRequest* theWrappedObject) const;
   void reject(QWebEngineFileSystemAccessRequest* theWrappedObject);
   void swap(QWebEngineFileSystemAccessRequest* theWrappedObject, QWebEngineFileSystemAccessRequest&  other);
};





class PythonQtWrapper_QWebEngineFullScreenRequest : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineFullScreenRequest* new_QWebEngineFullScreenRequest(const QWebEngineFullScreenRequest&  other);
void delete_QWebEngineFullScreenRequest(QWebEngineFullScreenRequest* obj) { delete obj; }
   void accept(QWebEngineFullScreenRequest* theWrappedObject);
   QWebEngineFullScreenRequest*  operator_assign(QWebEngineFullScreenRequest* theWrappedObject, const QWebEngineFullScreenRequest&  other);
   QUrl  origin(QWebEngineFullScreenRequest* theWrappedObject) const;
   void reject(QWebEngineFullScreenRequest* theWrappedObject);
   bool  toggleOn(QWebEngineFullScreenRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineHistory : public QObject
{ Q_OBJECT
public:
public slots:
   void back(QWebEngineHistory* theWrappedObject);
   QWebEngineHistoryItem  backItem(QWebEngineHistory* theWrappedObject) const;
   QList<QWebEngineHistoryItem >  backItems(QWebEngineHistory* theWrappedObject, int  maxItems) const;
   QWebEngineHistoryModel*  backItemsModel(QWebEngineHistory* theWrappedObject) const;
   bool  canGoBack(QWebEngineHistory* theWrappedObject) const;
   bool  canGoForward(QWebEngineHistory* theWrappedObject) const;
   void clear(QWebEngineHistory* theWrappedObject);
   int  count(QWebEngineHistory* theWrappedObject) const;
   QWebEngineHistoryItem  currentItem(QWebEngineHistory* theWrappedObject) const;
   int  currentItemIndex(QWebEngineHistory* theWrappedObject) const;
   void forward(QWebEngineHistory* theWrappedObject);
   QWebEngineHistoryItem  forwardItem(QWebEngineHistory* theWrappedObject) const;
   QList<QWebEngineHistoryItem >  forwardItems(QWebEngineHistory* theWrappedObject, int  maxItems) const;
   QWebEngineHistoryModel*  forwardItemsModel(QWebEngineHistory* theWrappedObject) const;
   void goToItem(QWebEngineHistory* theWrappedObject, const QWebEngineHistoryItem&  item);
   QWebEngineHistoryItem  itemAt(QWebEngineHistory* theWrappedObject, int  i) const;
   QList<QWebEngineHistoryItem >  items(QWebEngineHistory* theWrappedObject) const;
   QWebEngineHistoryModel*  itemsModel(QWebEngineHistory* theWrappedObject) const;
   void writeTo(QWebEngineHistory* theWrappedObject, QDataStream&  stream);
   void readFrom(QWebEngineHistory* theWrappedObject, QDataStream&  stream);
};





class PythonQtWrapper_QWebEngineHistoryItem : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineHistoryItem* new_QWebEngineHistoryItem(const QWebEngineHistoryItem&  other);
void delete_QWebEngineHistoryItem(QWebEngineHistoryItem* obj) { delete obj; }
   QUrl  iconUrl(QWebEngineHistoryItem* theWrappedObject) const;
   bool  isValid(QWebEngineHistoryItem* theWrappedObject) const;
   QDateTime  lastVisited(QWebEngineHistoryItem* theWrappedObject) const;
   QWebEngineHistoryItem*  operator_assign(QWebEngineHistoryItem* theWrappedObject, const QWebEngineHistoryItem&  other);
   QUrl  originalUrl(QWebEngineHistoryItem* theWrappedObject) const;
   void swap(QWebEngineHistoryItem* theWrappedObject, QWebEngineHistoryItem&  other);
   QString  title(QWebEngineHistoryItem* theWrappedObject) const;
   QUrl  url(QWebEngineHistoryItem* theWrappedObject) const;
    bool __nonzero__(QWebEngineHistoryItem* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QWebEngineHistoryModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Roles )
enum Roles{
  UrlRole = QWebEngineHistoryModel::UrlRole,   TitleRole = QWebEngineHistoryModel::TitleRole,   OffsetRole = QWebEngineHistoryModel::OffsetRole,   IconUrlRole = QWebEngineHistoryModel::IconUrlRole};
public slots:
   QVariant  data(QWebEngineHistoryModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const;
   void reset(QWebEngineHistoryModel* theWrappedObject);
   QHash<int , QByteArray >  roleNames(QWebEngineHistoryModel* theWrappedObject) const;
   int  rowCount(QWebEngineHistoryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
};





class PythonQtWrapper_QWebEngineLoadingInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ErrorDomain LoadStatus )
enum ErrorDomain{
  NoErrorDomain = QWebEngineLoadingInfo::NoErrorDomain,   InternalErrorDomain = QWebEngineLoadingInfo::InternalErrorDomain,   ConnectionErrorDomain = QWebEngineLoadingInfo::ConnectionErrorDomain,   CertificateErrorDomain = QWebEngineLoadingInfo::CertificateErrorDomain,   HttpErrorDomain = QWebEngineLoadingInfo::HttpErrorDomain,   FtpErrorDomain = QWebEngineLoadingInfo::FtpErrorDomain,   DnsErrorDomain = QWebEngineLoadingInfo::DnsErrorDomain,   HttpStatusCodeDomain = QWebEngineLoadingInfo::HttpStatusCodeDomain};
enum LoadStatus{
  LoadStartedStatus = QWebEngineLoadingInfo::LoadStartedStatus,   LoadStoppedStatus = QWebEngineLoadingInfo::LoadStoppedStatus,   LoadSucceededStatus = QWebEngineLoadingInfo::LoadSucceededStatus,   LoadFailedStatus = QWebEngineLoadingInfo::LoadFailedStatus};
public slots:
QWebEngineLoadingInfo* new_QWebEngineLoadingInfo(const QWebEngineLoadingInfo&  other);
void delete_QWebEngineLoadingInfo(QWebEngineLoadingInfo* obj) { delete obj; }
   int  errorCode(QWebEngineLoadingInfo* theWrappedObject) const;
   QWebEngineLoadingInfo::ErrorDomain  errorDomain(QWebEngineLoadingInfo* theWrappedObject) const;
   QString  errorString(QWebEngineLoadingInfo* theWrappedObject) const;
   bool  isErrorPage(QWebEngineLoadingInfo* theWrappedObject) const;
   QWebEngineLoadingInfo*  operator_assign(QWebEngineLoadingInfo* theWrappedObject, const QWebEngineLoadingInfo&  other);
   QMultiMap<QByteArray , QByteArray >  responseHeaders(QWebEngineLoadingInfo* theWrappedObject) const;
   QWebEngineLoadingInfo::LoadStatus  status(QWebEngineLoadingInfo* theWrappedObject) const;
   QUrl  url(QWebEngineLoadingInfo* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineNavigationRequest : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineNavigationRequest(QWebEngineNavigationRequest* obj) { delete obj; }
   void accept(QWebEngineNavigationRequest* theWrappedObject);
   bool  isMainFrame(QWebEngineNavigationRequest* theWrappedObject) const;
   QWebEngineNavigationRequest::NavigationType  navigationType(QWebEngineNavigationRequest* theWrappedObject) const;
   void reject(QWebEngineNavigationRequest* theWrappedObject);
   QUrl  url(QWebEngineNavigationRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineNewWindowRequest : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineNewWindowRequest(QWebEngineNewWindowRequest* obj) { delete obj; }
   QWebEngineNewWindowRequest::DestinationType  destination(QWebEngineNewWindowRequest* theWrappedObject) const;
   bool  isUserInitiated(QWebEngineNewWindowRequest* theWrappedObject) const;
   void openIn(QWebEngineNewWindowRequest* theWrappedObject, QWebEnginePage*  arg__1);
   QRect  requestedGeometry(QWebEngineNewWindowRequest* theWrappedObject) const;
   QUrl  requestedUrl(QWebEngineNewWindowRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineNotification : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineNotification(QWebEngineNotification* obj) { delete obj; }
   Qt::LayoutDirection  direction(QWebEngineNotification* theWrappedObject) const;
   QImage  icon(QWebEngineNotification* theWrappedObject) const;
   QString  language(QWebEngineNotification* theWrappedObject) const;
   bool  matches(QWebEngineNotification* theWrappedObject, const QWebEngineNotification*  other) const;
   QString  message(QWebEngineNotification* theWrappedObject) const;
   QUrl  origin(QWebEngineNotification* theWrappedObject) const;
   QString  tag(QWebEngineNotification* theWrappedObject) const;
   QString  title(QWebEngineNotification* theWrappedObject) const;
};





class PythonQtShell_QWebEnginePage : public QWebEnginePage
{
public:
    PythonQtShell_QWebEnginePage(QObject*  parent = nullptr):QWebEnginePage(parent),_wrapper(nullptr) {};
    PythonQtShell_QWebEnginePage(QWebEngineProfile*  profile, QObject*  parent = nullptr):QWebEnginePage(profile, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEnginePage() override;

bool  acceptNavigationRequest(const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame) override;
void childEvent(QChildEvent*  event) override;
QStringList  chooseFiles(QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes) override;
QWebEnginePage*  createWindow(QWebEnginePage::WebWindowType  type) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void javaScriptAlert(const QUrl&  securityOrigin, const QString&  msg) override;
bool  javaScriptConfirm(const QUrl&  securityOrigin, const QString&  msg) override;
void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID) override;
bool  javaScriptPrompt(const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result) override;
void timerEvent(QTimerEvent*  event) override;
void triggerAction(QWebEnginePage::WebAction  action, bool  checked = false) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEnginePage : public QWebEnginePage
{ public:
inline bool  promoted_acceptNavigationRequest(const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame) { return this->acceptNavigationRequest(url, type, isMainFrame); }
inline QStringList  promoted_chooseFiles(QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes) { return this->chooseFiles(mode, oldFiles, acceptedMimeTypes); }
inline QWebEnginePage*  promoted_createWindow(QWebEnginePage::WebWindowType  type) { return this->createWindow(type); }
inline void promoted_javaScriptAlert(const QUrl&  securityOrigin, const QString&  msg) { this->javaScriptAlert(securityOrigin, msg); }
inline bool  promoted_javaScriptConfirm(const QUrl&  securityOrigin, const QString&  msg) { return this->javaScriptConfirm(securityOrigin, msg); }
inline void promoted_javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID) { this->javaScriptConsoleMessage(level, message, lineNumber, sourceID); }
inline bool  promoted_javaScriptPrompt(const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result) { return this->javaScriptPrompt(securityOrigin, msg, defaultValue, result); }
inline bool  py_q_acceptNavigationRequest(const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame) { return QWebEnginePage::acceptNavigationRequest(url, type, isMainFrame); }
inline QStringList  py_q_chooseFiles(QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes) { return QWebEnginePage::chooseFiles(mode, oldFiles, acceptedMimeTypes); }
inline QWebEnginePage*  py_q_createWindow(QWebEnginePage::WebWindowType  type) { return QWebEnginePage::createWindow(type); }
inline bool  py_q_event(QEvent*  arg__1) { return QWebEnginePage::event(arg__1); }
inline void py_q_javaScriptAlert(const QUrl&  securityOrigin, const QString&  msg) { QWebEnginePage::javaScriptAlert(securityOrigin, msg); }
inline bool  py_q_javaScriptConfirm(const QUrl&  securityOrigin, const QString&  msg) { return QWebEnginePage::javaScriptConfirm(securityOrigin, msg); }
inline void py_q_javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID) { QWebEnginePage::javaScriptConsoleMessage(level, message, lineNumber, sourceID); }
inline bool  py_q_javaScriptPrompt(const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result) { return QWebEnginePage::javaScriptPrompt(securityOrigin, msg, defaultValue, result); }
inline void py_q_triggerAction(QWebEnginePage::WebAction  action, bool  checked = false) { QWebEnginePage::triggerAction(action, checked); }
};

class PythonQtWrapper_QWebEnginePage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FindFlag )
Q_FLAGS(FindFlags )
enum FindFlag{
  FindBackward = QWebEnginePage::FindBackward,   FindCaseSensitively = QWebEnginePage::FindCaseSensitively};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QWebEnginePage* new_QWebEnginePage(QObject*  parent = nullptr);
QWebEnginePage* new_QWebEnginePage(QWebEngineProfile*  profile, QObject*  parent = nullptr);
void delete_QWebEnginePage(QWebEnginePage* obj) { delete obj; }
   void acceptAsNewWindow(QWebEnginePage* theWrappedObject, QWebEngineNewWindowRequest&  request);
   bool  acceptNavigationRequest(QWebEnginePage* theWrappedObject, const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame);
   bool  py_q_acceptNavigationRequest(QWebEnginePage* theWrappedObject, const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_acceptNavigationRequest(url, type, isMainFrame));}
   QAction*  action(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action) const;
   QColor  backgroundColor(QWebEnginePage* theWrappedObject) const;
   QStringList  chooseFiles(QWebEnginePage* theWrappedObject, QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes);
   QStringList  py_q_chooseFiles(QWebEnginePage* theWrappedObject, QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_chooseFiles(mode, oldFiles, acceptedMimeTypes));}
   QSizeF  contentsSize(QWebEnginePage* theWrappedObject) const;
   QWebEnginePage*  createWindow(QWebEnginePage* theWrappedObject, QWebEnginePage::WebWindowType  type);
   QWebEnginePage*  py_q_createWindow(QWebEnginePage* theWrappedObject, QWebEnginePage::WebWindowType  type){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_createWindow(type));}
   QString  devToolsId(QWebEnginePage* theWrappedObject) const;
   QWebEnginePage*  devToolsPage(QWebEnginePage* theWrappedObject) const;
   void download(QWebEnginePage* theWrappedObject, const QUrl&  url, const QString&  filename = QString());
   bool  py_q_event(QWebEnginePage* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_event(arg__1));}
   bool  hasSelection(QWebEnginePage* theWrappedObject) const;
   QWebEngineHistory*  history(QWebEnginePage* theWrappedObject) const;
   QIcon  icon(QWebEnginePage* theWrappedObject) const;
   QUrl  iconUrl(QWebEnginePage* theWrappedObject) const;
   QWebEnginePage*  inspectedPage(QWebEnginePage* theWrappedObject) const;
   bool  isAudioMuted(QWebEnginePage* theWrappedObject) const;
   bool  isLoading(QWebEnginePage* theWrappedObject) const;
   bool  isVisible(QWebEnginePage* theWrappedObject) const;
   void javaScriptAlert(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg);
   void py_q_javaScriptAlert(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg){  (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptAlert(securityOrigin, msg));}
   bool  javaScriptConfirm(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg);
   bool  py_q_javaScriptConfirm(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptConfirm(securityOrigin, msg));}
   void javaScriptConsoleMessage(QWebEnginePage* theWrappedObject, QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID);
   void py_q_javaScriptConsoleMessage(QWebEnginePage* theWrappedObject, QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID){  (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptConsoleMessage(level, message, lineNumber, sourceID));}
   bool  javaScriptPrompt(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result);
   bool  py_q_javaScriptPrompt(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptPrompt(securityOrigin, msg, defaultValue, result));}
   QWebEnginePage::LifecycleState  lifecycleState(QWebEnginePage* theWrappedObject) const;
   void load(QWebEnginePage* theWrappedObject, const QUrl&  url);
   void printToPdf(QWebEnginePage* theWrappedObject, const QString&  filePath, const QPageLayout&  layout = QPageLayout(QPageSize(QPageSize::A4), QPageLayout::Portrait, QMarginsF()), const QPageRanges&  ranges = {});
   QWebEngineProfile*  profile(QWebEnginePage* theWrappedObject) const;
   bool  recentlyAudible(QWebEnginePage* theWrappedObject) const;
   QWebEnginePage::LifecycleState  recommendedState(QWebEnginePage* theWrappedObject) const;
   qint64  renderProcessPid(QWebEnginePage* theWrappedObject) const;
   void replaceMisspelledWord(QWebEnginePage* theWrappedObject, const QString&  replacement);
   QUrl  requestedUrl(QWebEnginePage* theWrappedObject) const;
   void save(QWebEnginePage* theWrappedObject, const QString&  filePath, QWebEngineDownloadRequest::SavePageFormat  format = QWebEngineDownloadRequest::MimeHtmlSaveFormat) const;
   QWebEngineScriptCollection*  scripts(QWebEnginePage* theWrappedObject);
   QPointF  scrollPosition(QWebEnginePage* theWrappedObject) const;
   QString  selectedText(QWebEnginePage* theWrappedObject) const;
   void setAudioMuted(QWebEnginePage* theWrappedObject, bool  muted);
   void setBackgroundColor(QWebEnginePage* theWrappedObject, const QColor&  color);
   void setContent(QWebEnginePage* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setDevToolsPage(QWebEnginePage* theWrappedObject, QWebEnginePage*  page);
   void setFeaturePermission(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, QWebEnginePage::Feature  feature, QWebEnginePage::PermissionPolicy  policy);
   void setHtml(QWebEnginePage* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setInspectedPage(QWebEnginePage* theWrappedObject, QWebEnginePage*  page);
   void setLifecycleState(QWebEnginePage* theWrappedObject, QWebEnginePage::LifecycleState  state);
   void setUrl(QWebEnginePage* theWrappedObject, const QUrl&  url);
   void setUrlRequestInterceptor(QWebEnginePage* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor);
   void setVisible(QWebEnginePage* theWrappedObject, bool  visible);
   void setZoomFactor(QWebEnginePage* theWrappedObject, qreal  factor);
   QWebEngineSettings*  settings(QWebEnginePage* theWrappedObject) const;
   QString  title(QWebEnginePage* theWrappedObject) const;
   void triggerAction(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked = false);
   void py_q_triggerAction(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked = false){  (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_triggerAction(action, checked));}
   QUrl  url(QWebEnginePage* theWrappedObject) const;
   qreal  zoomFactor(QWebEnginePage* theWrappedObject) const;
};





class PythonQtShell_QWebEngineProfile : public QWebEngineProfile
{
public:
    PythonQtShell_QWebEngineProfile(QObject*  parent = nullptr):QWebEngineProfile(parent),_wrapper(nullptr) {};
    PythonQtShell_QWebEngineProfile(const QString&  name, QObject*  parent = nullptr):QWebEngineProfile(name, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineProfile() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QWebEngineProfile : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineProfile* new_QWebEngineProfile(QObject*  parent = nullptr);
QWebEngineProfile* new_QWebEngineProfile(const QString&  name, QObject*  parent = nullptr);
void delete_QWebEngineProfile(QWebEngineProfile* obj) { delete obj; }
   QString  cachePath(QWebEngineProfile* theWrappedObject) const;
   void clearAllVisitedLinks(QWebEngineProfile* theWrappedObject);
   void clearHttpCache(QWebEngineProfile* theWrappedObject);
   void clearVisitedLinks(QWebEngineProfile* theWrappedObject, const QList<QUrl >&  urls);
   QWebEngineClientCertificateStore*  clientCertificateStore(QWebEngineProfile* theWrappedObject);
   QWebEngineCookieStore*  cookieStore(QWebEngineProfile* theWrappedObject);
   QWebEngineProfile*  static_QWebEngineProfile_defaultProfile();
   QString  downloadPath(QWebEngineProfile* theWrappedObject) const;
   QString  httpAcceptLanguage(QWebEngineProfile* theWrappedObject) const;
   int  httpCacheMaximumSize(QWebEngineProfile* theWrappedObject) const;
   QWebEngineProfile::HttpCacheType  httpCacheType(QWebEngineProfile* theWrappedObject) const;
   QString  httpUserAgent(QWebEngineProfile* theWrappedObject) const;
   void installUrlSchemeHandler(QWebEngineProfile* theWrappedObject, const QByteArray&  scheme, QWebEngineUrlSchemeHandler*  arg__2);
   bool  isOffTheRecord(QWebEngineProfile* theWrappedObject) const;
   bool  isPushServiceEnabled(QWebEngineProfile* theWrappedObject) const;
   bool  isSpellCheckEnabled(QWebEngineProfile* theWrappedObject) const;
   QWebEngineProfile::PersistentCookiesPolicy  persistentCookiesPolicy(QWebEngineProfile* theWrappedObject) const;
   QString  persistentStoragePath(QWebEngineProfile* theWrappedObject) const;
   void removeAllUrlSchemeHandlers(QWebEngineProfile* theWrappedObject);
   void removeUrlScheme(QWebEngineProfile* theWrappedObject, const QByteArray&  scheme);
   void removeUrlSchemeHandler(QWebEngineProfile* theWrappedObject, QWebEngineUrlSchemeHandler*  arg__1);
   QWebEngineScriptCollection*  scripts(QWebEngineProfile* theWrappedObject) const;
   void setCachePath(QWebEngineProfile* theWrappedObject, const QString&  path);
   void setDownloadPath(QWebEngineProfile* theWrappedObject, const QString&  path);
   void setHttpAcceptLanguage(QWebEngineProfile* theWrappedObject, const QString&  httpAcceptLanguage);
   void setHttpCacheMaximumSize(QWebEngineProfile* theWrappedObject, int  maxSize);
   void setHttpCacheType(QWebEngineProfile* theWrappedObject, QWebEngineProfile::HttpCacheType  arg__1);
   void setHttpUserAgent(QWebEngineProfile* theWrappedObject, const QString&  userAgent);
   void setPersistentCookiesPolicy(QWebEngineProfile* theWrappedObject, QWebEngineProfile::PersistentCookiesPolicy  arg__1);
   void setPersistentStoragePath(QWebEngineProfile* theWrappedObject, const QString&  path);
   void setPushServiceEnabled(QWebEngineProfile* theWrappedObject, bool  enabled);
   void setSpellCheckEnabled(QWebEngineProfile* theWrappedObject, bool  enabled);
   void setSpellCheckLanguages(QWebEngineProfile* theWrappedObject, const QStringList&  languages);
   void setUrlRequestInterceptor(QWebEngineProfile* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor);
   QWebEngineSettings*  settings(QWebEngineProfile* theWrappedObject) const;
   QStringList  spellCheckLanguages(QWebEngineProfile* theWrappedObject) const;
   QString  storageName(QWebEngineProfile* theWrappedObject) const;
   const QWebEngineUrlSchemeHandler*  urlSchemeHandler(QWebEngineProfile* theWrappedObject, const QByteArray&  arg__1) const;
   bool  visitedLinksContainsUrl(QWebEngineProfile* theWrappedObject, const QUrl&  url) const;
};





class PythonQtWrapper_QWebEngineScript : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InjectionPoint ScriptWorldId )
enum InjectionPoint{
  Deferred = QWebEngineScript::Deferred,   DocumentReady = QWebEngineScript::DocumentReady,   DocumentCreation = QWebEngineScript::DocumentCreation};
enum ScriptWorldId{
  MainWorld = QWebEngineScript::MainWorld,   ApplicationWorld = QWebEngineScript::ApplicationWorld,   UserWorld = QWebEngineScript::UserWorld};
public slots:
QWebEngineScript* new_QWebEngineScript();
QWebEngineScript* new_QWebEngineScript(const QWebEngineScript&  other);
void delete_QWebEngineScript(QWebEngineScript* obj) { delete obj; }
   QWebEngineScript::InjectionPoint  injectionPoint(QWebEngineScript* theWrappedObject) const;
   QString  name(QWebEngineScript* theWrappedObject) const;
   bool  __ne__(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other) const;
   QWebEngineScript*  operator_assign(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other);
   bool  __eq__(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other) const;
   bool  runsOnSubFrames(QWebEngineScript* theWrappedObject) const;
   void setInjectionPoint(QWebEngineScript* theWrappedObject, QWebEngineScript::InjectionPoint  arg__1);
   void setName(QWebEngineScript* theWrappedObject, const QString&  arg__1);
   void setRunsOnSubFrames(QWebEngineScript* theWrappedObject, bool  on);
   void setSourceCode(QWebEngineScript* theWrappedObject, const QString&  arg__1);
   void setSourceUrl(QWebEngineScript* theWrappedObject, const QUrl&  url);
   void setWorldId(QWebEngineScript* theWrappedObject, unsigned int  arg__1);
   QString  sourceCode(QWebEngineScript* theWrappedObject) const;
   QUrl  sourceUrl(QWebEngineScript* theWrappedObject) const;
   void swap(QWebEngineScript* theWrappedObject, QWebEngineScript&  other);
   unsigned int  worldId(QWebEngineScript* theWrappedObject) const;
    QString py_toString(QWebEngineScript*);
};





class PythonQtWrapper_QWebEngineScriptCollection : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineScriptCollection(QWebEngineScriptCollection* obj) { delete obj; }
   void clear(QWebEngineScriptCollection* theWrappedObject);
   bool  contains(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  value) const;
   int  count(QWebEngineScriptCollection* theWrappedObject) const;
   QList<QWebEngineScript >  find(QWebEngineScriptCollection* theWrappedObject, const QString&  name) const;
   void insert(QWebEngineScriptCollection* theWrappedObject, const QList<QWebEngineScript >&  list);
   void insert(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  arg__1);
   bool  isEmpty(QWebEngineScriptCollection* theWrappedObject) const;
   bool  remove(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  arg__1);
   QList<QWebEngineScript >  toList(QWebEngineScriptCollection* theWrappedObject) const;
    bool __nonzero__(QWebEngineScriptCollection* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QWebEngineSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontFamily FontSize UnknownUrlSchemePolicy WebAttribute )
enum FontFamily{
  StandardFont = QWebEngineSettings::StandardFont,   FixedFont = QWebEngineSettings::FixedFont,   SerifFont = QWebEngineSettings::SerifFont,   SansSerifFont = QWebEngineSettings::SansSerifFont,   CursiveFont = QWebEngineSettings::CursiveFont,   FantasyFont = QWebEngineSettings::FantasyFont,   PictographFont = QWebEngineSettings::PictographFont};
enum FontSize{
  MinimumFontSize = QWebEngineSettings::MinimumFontSize,   MinimumLogicalFontSize = QWebEngineSettings::MinimumLogicalFontSize,   DefaultFontSize = QWebEngineSettings::DefaultFontSize,   DefaultFixedFontSize = QWebEngineSettings::DefaultFixedFontSize};
enum UnknownUrlSchemePolicy{
  InheritedUnknownUrlSchemePolicy = QWebEngineSettings::InheritedUnknownUrlSchemePolicy,   DisallowUnknownUrlSchemes = QWebEngineSettings::DisallowUnknownUrlSchemes,   AllowUnknownUrlSchemesFromUserInteraction = QWebEngineSettings::AllowUnknownUrlSchemesFromUserInteraction,   AllowAllUnknownUrlSchemes = QWebEngineSettings::AllowAllUnknownUrlSchemes};
enum WebAttribute{
  AutoLoadImages = QWebEngineSettings::AutoLoadImages,   JavascriptEnabled = QWebEngineSettings::JavascriptEnabled,   JavascriptCanOpenWindows = QWebEngineSettings::JavascriptCanOpenWindows,   JavascriptCanAccessClipboard = QWebEngineSettings::JavascriptCanAccessClipboard,   LinksIncludedInFocusChain = QWebEngineSettings::LinksIncludedInFocusChain,   LocalStorageEnabled = QWebEngineSettings::LocalStorageEnabled,   LocalContentCanAccessRemoteUrls = QWebEngineSettings::LocalContentCanAccessRemoteUrls,   XSSAuditingEnabled = QWebEngineSettings::XSSAuditingEnabled,   SpatialNavigationEnabled = QWebEngineSettings::SpatialNavigationEnabled,   LocalContentCanAccessFileUrls = QWebEngineSettings::LocalContentCanAccessFileUrls,   HyperlinkAuditingEnabled = QWebEngineSettings::HyperlinkAuditingEnabled,   ScrollAnimatorEnabled = QWebEngineSettings::ScrollAnimatorEnabled,   ErrorPageEnabled = QWebEngineSettings::ErrorPageEnabled,   PluginsEnabled = QWebEngineSettings::PluginsEnabled,   FullScreenSupportEnabled = QWebEngineSettings::FullScreenSupportEnabled,   ScreenCaptureEnabled = QWebEngineSettings::ScreenCaptureEnabled,   WebGLEnabled = QWebEngineSettings::WebGLEnabled,   Accelerated2dCanvasEnabled = QWebEngineSettings::Accelerated2dCanvasEnabled,   AutoLoadIconsForPage = QWebEngineSettings::AutoLoadIconsForPage,   TouchIconsEnabled = QWebEngineSettings::TouchIconsEnabled,   FocusOnNavigationEnabled = QWebEngineSettings::FocusOnNavigationEnabled,   PrintElementBackgrounds = QWebEngineSettings::PrintElementBackgrounds,   AllowRunningInsecureContent = QWebEngineSettings::AllowRunningInsecureContent,   AllowGeolocationOnInsecureOrigins = QWebEngineSettings::AllowGeolocationOnInsecureOrigins,   AllowWindowActivationFromJavaScript = QWebEngineSettings::AllowWindowActivationFromJavaScript,   ShowScrollBars = QWebEngineSettings::ShowScrollBars,   PlaybackRequiresUserGesture = QWebEngineSettings::PlaybackRequiresUserGesture,   WebRTCPublicInterfacesOnly = QWebEngineSettings::WebRTCPublicInterfacesOnly,   JavascriptCanPaste = QWebEngineSettings::JavascriptCanPaste,   DnsPrefetchEnabled = QWebEngineSettings::DnsPrefetchEnabled,   PdfViewerEnabled = QWebEngineSettings::PdfViewerEnabled,   NavigateOnDropEnabled = QWebEngineSettings::NavigateOnDropEnabled,   ReadingFromCanvasEnabled = QWebEngineSettings::ReadingFromCanvasEnabled};
public slots:
void delete_QWebEngineSettings(QWebEngineSettings* obj) { delete obj; }
   QString  defaultTextEncoding(QWebEngineSettings* theWrappedObject) const;
   QString  fontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which) const;
   int  fontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type) const;
   void resetAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr);
   void resetFontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which);
   void resetFontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type);
   void resetUnknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject);
   void setAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr, bool  on);
   void setDefaultTextEncoding(QWebEngineSettings* theWrappedObject, const QString&  encoding);
   void setFontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which, const QString&  family);
   void setFontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type, int  size);
   void setUnknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject, QWebEngineSettings::UnknownUrlSchemePolicy  policy);
   bool  testAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr) const;
   QWebEngineSettings::UnknownUrlSchemePolicy  unknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineUrlRequestInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NavigationType ResourceType )
enum NavigationType{
  NavigationTypeLink = QWebEngineUrlRequestInfo::NavigationTypeLink,   NavigationTypeTyped = QWebEngineUrlRequestInfo::NavigationTypeTyped,   NavigationTypeFormSubmitted = QWebEngineUrlRequestInfo::NavigationTypeFormSubmitted,   NavigationTypeBackForward = QWebEngineUrlRequestInfo::NavigationTypeBackForward,   NavigationTypeReload = QWebEngineUrlRequestInfo::NavigationTypeReload,   NavigationTypeOther = QWebEngineUrlRequestInfo::NavigationTypeOther,   NavigationTypeRedirect = QWebEngineUrlRequestInfo::NavigationTypeRedirect};
enum ResourceType{
  ResourceTypeMainFrame = QWebEngineUrlRequestInfo::ResourceTypeMainFrame,   ResourceTypeSubFrame = QWebEngineUrlRequestInfo::ResourceTypeSubFrame,   ResourceTypeStylesheet = QWebEngineUrlRequestInfo::ResourceTypeStylesheet,   ResourceTypeScript = QWebEngineUrlRequestInfo::ResourceTypeScript,   ResourceTypeImage = QWebEngineUrlRequestInfo::ResourceTypeImage,   ResourceTypeFontResource = QWebEngineUrlRequestInfo::ResourceTypeFontResource,   ResourceTypeSubResource = QWebEngineUrlRequestInfo::ResourceTypeSubResource,   ResourceTypeObject = QWebEngineUrlRequestInfo::ResourceTypeObject,   ResourceTypeMedia = QWebEngineUrlRequestInfo::ResourceTypeMedia,   ResourceTypeWorker = QWebEngineUrlRequestInfo::ResourceTypeWorker,   ResourceTypeSharedWorker = QWebEngineUrlRequestInfo::ResourceTypeSharedWorker,   ResourceTypePrefetch = QWebEngineUrlRequestInfo::ResourceTypePrefetch,   ResourceTypeFavicon = QWebEngineUrlRequestInfo::ResourceTypeFavicon,   ResourceTypeXhr = QWebEngineUrlRequestInfo::ResourceTypeXhr,   ResourceTypePing = QWebEngineUrlRequestInfo::ResourceTypePing,   ResourceTypeServiceWorker = QWebEngineUrlRequestInfo::ResourceTypeServiceWorker,   ResourceTypeCspReport = QWebEngineUrlRequestInfo::ResourceTypeCspReport,   ResourceTypePluginResource = QWebEngineUrlRequestInfo::ResourceTypePluginResource,   ResourceTypeNavigationPreloadMainFrame = QWebEngineUrlRequestInfo::ResourceTypeNavigationPreloadMainFrame,   ResourceTypeNavigationPreloadSubFrame = QWebEngineUrlRequestInfo::ResourceTypeNavigationPreloadSubFrame,   ResourceTypeLast = QWebEngineUrlRequestInfo::ResourceTypeLast,   ResourceTypeWebSocket = QWebEngineUrlRequestInfo::ResourceTypeWebSocket,   ResourceTypeUnknown = QWebEngineUrlRequestInfo::ResourceTypeUnknown};
public slots:
   void block(QWebEngineUrlRequestInfo* theWrappedObject, bool  shouldBlock);
   bool  changed(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QUrl  firstPartyUrl(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QHash<QByteArray , QByteArray >  httpHeaders(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QUrl  initiator(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QWebEngineUrlRequestInfo::NavigationType  navigationType(QWebEngineUrlRequestInfo* theWrappedObject) const;
   void redirect(QWebEngineUrlRequestInfo* theWrappedObject, const QUrl&  url);
   QByteArray  requestMethod(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QUrl  requestUrl(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QWebEngineUrlRequestInfo::ResourceType  resourceType(QWebEngineUrlRequestInfo* theWrappedObject) const;
   void setHttpHeader(QWebEngineUrlRequestInfo* theWrappedObject, const QByteArray&  name, const QByteArray&  value);
};





class PythonQtShell_QWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor
{
public:
    PythonQtShell_QWebEngineUrlRequestInterceptor(QObject*  p = nullptr):QWebEngineUrlRequestInterceptor(p),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineUrlRequestInterceptor() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void interceptRequest(QWebEngineUrlRequestInfo&  info) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor
{ public:
inline void py_q_interceptRequest(QWebEngineUrlRequestInfo&  info) { this->interceptRequest(info); }
};

class PythonQtWrapper_QWebEngineUrlRequestInterceptor : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineUrlRequestInterceptor* new_QWebEngineUrlRequestInterceptor(QObject*  p = nullptr);
void delete_QWebEngineUrlRequestInterceptor(QWebEngineUrlRequestInterceptor* obj) { delete obj; }
   void interceptRequest(QWebEngineUrlRequestInterceptor* theWrappedObject, QWebEngineUrlRequestInfo&  info);
   void py_q_interceptRequest(QWebEngineUrlRequestInterceptor* theWrappedObject, QWebEngineUrlRequestInfo&  info){  (((PythonQtPublicPromoter_QWebEngineUrlRequestInterceptor*)theWrappedObject)->py_q_interceptRequest(info));}
};





class PythonQtWrapper_QWebEngineUrlRequestJob : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineUrlRequestJob(QWebEngineUrlRequestJob* obj) { delete obj; }
   void fail(QWebEngineUrlRequestJob* theWrappedObject, QWebEngineUrlRequestJob::Error  error);
   QUrl  initiator(QWebEngineUrlRequestJob* theWrappedObject) const;
   void redirect(QWebEngineUrlRequestJob* theWrappedObject, const QUrl&  url);
   void reply(QWebEngineUrlRequestJob* theWrappedObject, const QByteArray&  contentType, QIODevice*  device);
   QMap<QByteArray , QByteArray >  requestHeaders(QWebEngineUrlRequestJob* theWrappedObject) const;
   QByteArray  requestMethod(QWebEngineUrlRequestJob* theWrappedObject) const;
   QUrl  requestUrl(QWebEngineUrlRequestJob* theWrappedObject) const;
   void setAdditionalResponseHeaders(QWebEngineUrlRequestJob* theWrappedObject, const QMultiMap<QByteArray , QByteArray >&  additionalResponseHeaders) const;
};





class PythonQtShell_QWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler
{
public:
    PythonQtShell_QWebEngineUrlSchemeHandler(QObject*  parent = nullptr):QWebEngineUrlSchemeHandler(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineUrlSchemeHandler() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void requestStarted(QWebEngineUrlRequestJob*  arg__1) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler
{ public:
inline void py_q_requestStarted(QWebEngineUrlRequestJob*  arg__1) { this->requestStarted(arg__1); }
};

class PythonQtWrapper_QWebEngineUrlSchemeHandler : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineUrlSchemeHandler* new_QWebEngineUrlSchemeHandler(QObject*  parent = nullptr);
void delete_QWebEngineUrlSchemeHandler(QWebEngineUrlSchemeHandler* obj) { delete obj; }
   void requestStarted(QWebEngineUrlSchemeHandler* theWrappedObject, QWebEngineUrlRequestJob*  arg__1);
   void py_q_requestStarted(QWebEngineUrlSchemeHandler* theWrappedObject, QWebEngineUrlRequestJob*  arg__1){  (((PythonQtPublicPromoter_QWebEngineUrlSchemeHandler*)theWrappedObject)->py_q_requestStarted(arg__1));}
};





class PythonQtShell_QWebEngineView : public QWebEngineView
{
public:
    PythonQtShell_QWebEngineView(QWebEnginePage*  page, QWidget*  parent = nullptr):QWebEngineView(page, parent),_wrapper(nullptr) {};
    PythonQtShell_QWebEngineView(QWebEngineProfile*  profile, QWidget*  parent = nullptr):QWebEngineView(profile, parent),_wrapper(nullptr) {};
    PythonQtShell_QWebEngineView(QWidget*  parent = nullptr):QWebEngineView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
QWebEngineView*  createWindow(QWebEnginePage::WebWindowType  type) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  e) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  e) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  arg__1) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
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
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEngineView : public QWebEngineView
{ public:
inline void promoted_closeEvent(QCloseEvent*  arg__1) { this->closeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { this->contextMenuEvent(arg__1); }
inline QWebEngineView*  promoted_createWindow(QWebEnginePage::WebWindowType  type) { return this->createWindow(type); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { this->dragEnterEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { this->dropEvent(e); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void py_q_closeEvent(QCloseEvent*  arg__1) { QWebEngineView::closeEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  arg__1) { QWebEngineView::contextMenuEvent(arg__1); }
inline QWebEngineView*  py_q_createWindow(QWebEnginePage::WebWindowType  type) { return QWebEngineView::createWindow(type); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  e) { QWebEngineView::dragEnterEvent(e); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QWebEngineView::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QWebEngineView::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  e) { QWebEngineView::dropEvent(e); }
inline bool  py_q_event(QEvent*  arg__1) { return QWebEngineView::event(arg__1); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QWebEngineView::hideEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QWebEngineView::showEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QWebEngineView::sizeHint(); }
};

class PythonQtWrapper_QWebEngineView : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineView* new_QWebEngineView(QWebEnginePage*  page, QWidget*  parent = nullptr);
QWebEngineView* new_QWebEngineView(QWebEngineProfile*  profile, QWidget*  parent = nullptr);
QWebEngineView* new_QWebEngineView(QWidget*  parent = nullptr);
void delete_QWebEngineView(QWebEngineView* obj) { delete obj; }
   void py_q_closeEvent(QWebEngineView* theWrappedObject, QCloseEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_closeEvent(arg__1));}
   void py_q_contextMenuEvent(QWebEngineView* theWrappedObject, QContextMenuEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_contextMenuEvent(arg__1));}
   QMenu*  createStandardContextMenu(QWebEngineView* theWrappedObject);
   QWebEngineView*  createWindow(QWebEngineView* theWrappedObject, QWebEnginePage::WebWindowType  type);
   QWebEngineView*  py_q_createWindow(QWebEngineView* theWrappedObject, QWebEnginePage::WebWindowType  type){  return (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_createWindow(type));}
   void py_q_dragEnterEvent(QWebEngineView* theWrappedObject, QDragEnterEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dragEnterEvent(e));}
   void py_q_dragLeaveEvent(QWebEngineView* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QWebEngineView* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QWebEngineView* theWrappedObject, QDropEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dropEvent(e));}
   bool  py_q_event(QWebEngineView* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_event(arg__1));}
   QWebEngineView*  static_QWebEngineView_forPage(const QWebEnginePage*  page);
   bool  hasSelection(QWebEngineView* theWrappedObject) const;
   void py_q_hideEvent(QWebEngineView* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_hideEvent(arg__1));}
   QWebEngineHistory*  history(QWebEngineView* theWrappedObject) const;
   QIcon  icon(QWebEngineView* theWrappedObject) const;
   QUrl  iconUrl(QWebEngineView* theWrappedObject) const;
   QWebEngineContextMenuRequest*  lastContextMenuRequest(QWebEngineView* theWrappedObject) const;
   void load(QWebEngineView* theWrappedObject, const QUrl&  url);
   QWebEnginePage*  page(QWebEngineView* theWrappedObject) const;
   QAction*  pageAction(QWebEngineView* theWrappedObject, QWebEnginePage::WebAction  action) const;
   void print(QWebEngineView* theWrappedObject, QPrinter*  printer);
   void printToPdf(QWebEngineView* theWrappedObject, const QString&  filePath, const QPageLayout&  layout = QPageLayout(QPageSize(QPageSize::A4),QPageLayout::Portrait, QMarginsF()), const QPageRanges&  ranges = {});
   QString  selectedText(QWebEngineView* theWrappedObject) const;
   void setContent(QWebEngineView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setHtml(QWebEngineView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setPage(QWebEngineView* theWrappedObject, QWebEnginePage*  page);
   void setUrl(QWebEngineView* theWrappedObject, const QUrl&  url);
   void setZoomFactor(QWebEngineView* theWrappedObject, qreal  factor);
   QWebEngineSettings*  settings(QWebEngineView* theWrappedObject) const;
   void py_q_showEvent(QWebEngineView* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  sizeHint(QWebEngineView* theWrappedObject) const;
   QSize  py_q_sizeHint(QWebEngineView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_sizeHint());}
   QString  title(QWebEngineView* theWrappedObject) const;
   void triggerPageAction(QWebEngineView* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked = false);
   QUrl  url(QWebEngineView* theWrappedObject) const;
   qreal  zoomFactor(QWebEngineView* theWrappedObject) const;
};


