#ifndef __STRING_UTIL__
#define __STRING_UTIL__


class StringUtil 
{
public:
    static QString capitalize(const QString &str) {
        return str.left(1).toUpper() + str.mid(1);
    }

    static QString toSnakeCase(const QString &str) {
        QString snake_str = str;
        return snake_str.replace(QRegExp("(.)([A-Z][a-z]+)"), "\\1_\\2").replace(QRegExp("([a-z0-9])([A-Z])"), "\\1_\\2").toLower();
    }

    static QString toCamelCase(const QString &str) {
        QString camel_str;
        foreach (QString s, str.split('_')) camel_str += capitalize(s);
        return camel_str;
    }
};

#endif
