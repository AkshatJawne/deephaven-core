package io.deephaven.internal.log;

import io.deephaven.io.log.LogSink;
import io.deephaven.io.logger.LogBuffer;

public interface InitSink {
    void accept(LogSink sink, LogBuffer logBuffer);
}
