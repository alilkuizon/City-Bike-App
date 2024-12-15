#include "postgresDatabaseService.h"

PostgresDatabaseService::PostgresDatabaseService(QObject *)
    : QObject(), m_connectionName("DefaultConnection")
{
}

bool PostgresDatabaseService::connect()
{
    if (QSqlDatabase::contains(m_connectionName))
    {
        m_database = QSqlDatabase::database(m_connectionName);
    }
    else
    {
        m_database = QSqlDatabase::addDatabase("QPSQL", m_connectionName); // PostgreSQL driver
    }

    m_database = QSqlDatabase::addDatabase("QPSQL");
    m_database.setHostName("localhost");
    m_database.setPort(8088);
    m_database.setDatabaseName("citybike");
    m_database.setUserName("academy");
    m_database.setPassword("academy");

    if (!m_database.open())
    {
        qCritical() << "Failed to connect to the database:" << m_database.lastError().text();
        return false;
    }

    qDebug() << "Connected to the database successfully.";
    return true;
}

void PostgresDatabaseService::disconnect()
{
    if (m_database.isOpen())
    {
        m_database.close();
        qDebug() << "Database connection closed.";
    }

    QSqlDatabase::removeDatabase(m_connectionName);
}

bool PostgresDatabaseService::isConnected() const
{
    return m_database.isOpen();
}

bool PostgresDatabaseService::beginTransaction()
{
    if (m_database.isOpen())
    {
        return m_database.transaction();
    }
    qWarning() << "Cannot begin transaction: Database is not open.";
    return false;
}

bool PostgresDatabaseService::commitTransaction()
{
    if (m_database.isOpen())
    {
        return m_database.commit();
    }
    qWarning() << "Cannot commit transaction: Database is not open.";
    return false;
}

bool PostgresDatabaseService::rollbackTransaction()
{
    if (m_database.isOpen())
    {
        return m_database.rollback();
    }
    qWarning() << "Cannot rollback transaction: Database is not open.";
    return false;
}

QSqlDatabase &PostgresDatabaseService::getConnection()
{
    return m_database;
}
