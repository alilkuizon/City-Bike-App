#include <QtTest>

// add necessary includes here

class sqlDatabaseBackend : public QObject
{
    Q_OBJECT

  public:
    sqlDatabaseBackend();
    ~sqlDatabaseBackend();

  private slots:
    void test_case1();
};

sqlDatabaseBackend::sqlDatabaseBackend() {}

sqlDatabaseBackend::~sqlDatabaseBackend() {}

void sqlDatabaseBackend::test_case1() {}

QTEST_APPLESS_MAIN(sqlDatabaseBackend)

#include "tst_sqldatabasebackend.moc"
