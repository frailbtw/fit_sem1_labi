<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

    <xsl:template match="/">
        <html>

        <head>
            <title>Sorted Products</title>
            <style>
                table {
                    border-collapse: collapse;
                    width: 100%;
                }

                th,
                td {
                    border: 1px solid #dddddd;
                    text-align: left;
                    padding: 8px;
                }

                th {
                    background-color: #f2f2f2;
                }
            </style>
        </head>

        <body>
            <h2>Sorted Products</h2>
            <table border="1">
                <tr>
                    <th>Name</th>
                    <th>Price</th>
                    <th>Brand</th>
                    <th>Category</th>
                </tr>
                <!-- 
    Этот блок кода использует цикл xsl:for-each для обработки каждого элемента "product" 
    внутри корневого элемента "products" в XML-документе. 
    Далее, каждый продукт сортируется по атрибуту "price" в порядке возрастания.
-->
                <xsl:for-each select="/products/product">
                    <!-- 
        xsl:sort используется для сортировки выбранных элементов.
        select="price" указывает, что сортировка будет осуществляться по значению атрибута "price".
        data-type="number" гарантирует сортировку как числовых значений.
        order="ascending" указывает на сортировку по возрастанию.
    -->
                    <xsl:sort select="price" data-type="number" order="ascending" />
                    <!-- 
        Для каждого продукта создается строка таблицы <tr>.
        Затем, внутри каждой строки, создаются ячейки <td>, содержащие значения различных атрибутов продукта.
    -->
                    <tr>
                        <td>
                            <xsl:value-of select="name" />
                        </td>
                        <td>
                            <xsl:value-of select="price" />
                        </td>
                        <td>
                            <xsl:value-of select="brand" />
                        </td>
                        <td>
                            <xsl:value-of select="category" />
                        </td>
                    </tr>
                </xsl:for-each>
            </table>
        </body>

        </html>
    </xsl:template>

</xsl:stylesheet>