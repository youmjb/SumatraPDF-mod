/* Copyright 2022 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

struct EditAnnotationsWindow;

void StartEditAnnotations(WindowTab*, Annotation*);
void StartEditAnnotations(WindowTab*, Vec<Annotation*>&);
void CloseAndDeleteEditAnnotationsWindow(EditAnnotationsWindow*);
void AddAnnotationToEditWindow(EditAnnotationsWindow*, Annotation*);
void SelectAnnotationInEditWindow(EditAnnotationsWindow*, Annotation*);
void DeleteAnnotationAndUpdateUI(WindowTab*, EditAnnotationsWindow*, Annotation*);
void ChangeLine(Annotation* annot, PointF a, PointF b);
void MoveLine(Annotation* annot, PointF a);
void GetLinePoint(Annotation* annot, PointF* a, PointF* b);
void transferFlagStopTimer(bool* stoptimer);
void SetMaxW(Annotation* annot, int a);
void SetMaxWShow(Annotation* annot);
