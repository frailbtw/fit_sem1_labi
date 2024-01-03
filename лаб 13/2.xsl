<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

  <!-- Определение стилей для корневого элемента 'students' -->
  <xsl:template match="students">
    <html>
      <head>
      <title>Sudent grades</title>
        <style>
          table {
            border-collapse: collapse;
            width: 100%;
          }

          th, td {
            border: 1px solid #dddddd;
            text-align: left;
            padding: 8px;
          }

          th {
            background-color: #f2f2f2;
          }

          /* Оценка ниже 4 - красный фон */
          td.below-four {
            background-color: #ffcccc;
          }

          /* Оценка выше 8 - зеленый фон */
          td.above-eight {
            background-color: #ccffcc;
          }
          
        </style>
      </head>
      <body>
        <h2>Student Grades</h2>
        <table>
          <tr>
            <th>Name</th>
            <th>Grade</th>
          </tr>
          <!-- Применяем шаблон для каждого элемента 'student' -->
          <xsl:apply-templates select="student" />
        </table>
      </body>
    </html>
  </xsl:template>

  <!-- Определение стилей для каждого элемента 'student' -->
  <xsl:template match="student">
    <tr>
      <td><xsl:value-of select="name" /></td>
      <!-- Применяем условия для цветного фона в зависимости от оценки -->
      <xsl:choose>
        <xsl:when test="grade &lt; 4">
          <td class="below-four"><xsl:value-of select="grade" /></td>
        </xsl:when>
        <xsl:when test="grade > 8">
          <td class="above-eight"><xsl:value-of select="grade" /></td>
        </xsl:when>
        <xsl:otherwise>
          <td><xsl:value-of select="grade" /></td>
        </xsl:otherwise>
      </xsl:choose>
    </tr>
  </xsl:template>

</xsl:stylesheet>
