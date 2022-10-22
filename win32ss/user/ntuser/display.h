#pragma once

NTSTATUS
NTAPI
InitVideo(VOID);

BOOLEAN
NTAPI
UserGetBaseVideo(VOID);

VOID
NTAPI
UserSetBaseVideo(
    IN BOOLEAN bBaseVideo);
