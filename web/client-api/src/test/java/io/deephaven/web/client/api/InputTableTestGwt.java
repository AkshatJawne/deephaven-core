//
// Copyright (c) 2016-2024 Deephaven Data Labs and Patent Pending
//

package io.deephaven.web.client.api;

import elemental2.core.JsArray;

public class InputTableTestGwt extends AbstractAsyncGwtTestCase {
    private final TableSourceBuilder tables = new TableSourceBuilder()
            .script("from deephaven import empty_table, input_table")
            .script("source", "empty_table(5).update([\"A=`` + i\", \"B=`` + i * 2\", \"C=i\", \"D=i * 2\", \"E=`` + i\", \"F=`` + i * 2\",])")
            .script("result1", "input_table(init_table=source, key_cols=[])")
            .script("result2", "input_table(init_table=source, key_cols=[\"A\" , \"B\" ])")
            .script("result3", "input_table(init_table=source, key_cols=[\"C\"])")
            .script("result4", "input_table(init_table=source, key_cols=[\"E\" , \"F\" ])");

    public void testInputTable() {
        connect(tables)
                .then(table("result1"))
                .then(JsTable::inputTable)
                .then(inputTable -> {
                    JsArray<Column> keyColumns = inputTable.getKeyColumns();
                    assertEquals(0, keyColumns.length);
                    return null;
                })
                .then(this::finish).catch_(this::report);

        connect(tables)
                .then(table("result2"))
                .then(JsTable::inputTable)
                .then(inputTable -> {
                    JsArray<Column> keyColumns = inputTable.getKeyColumns();
                    assertEquals(2, keyColumns.length);
                    return null;
                })
                .then(this::finish).catch_(this::report);

        connect(tables)
                .then(table("result3"))
                .then(JsTable::inputTable)
                .then(inputTable -> {
                    JsArray<Column> keyColumns = inputTable.getKeyColumns();
                    assertEquals(1, keyColumns.length);
                    return null;
                })
                .then(this::finish).catch_(this::report);

        connect(tables)
                .then(table("result4"))
                .then(JsTable::inputTable)
                .then(inputTable -> {
                    JsArray<Column> keyColumns = inputTable.getKeyColumns();
                    assertEquals(2, keyColumns.length);
                    return null;
                })
                .then(this::finish).catch_(this::report);
    }

    @Override
    public String getModuleName() {
        return "io.deephaven.web.DeephavenIntegrationTest";
    }
}
