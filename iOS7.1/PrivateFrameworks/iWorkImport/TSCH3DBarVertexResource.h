//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DAbstractBarVertexResource.h>

@class TSCH3DBarExtrusionGeometry;

__attribute__((visibility("hidden")))
@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource
{
    TSCH3DBarExtrusionGeometry *mGeometry;
}

- (id)geometry;
- (int)capOffset;
- (int)numCapVertices;
- (int)verticesOffset;
- (int)numVertices;
- (id)get;
- (void)dealloc;
- (id)initWithGeometry:(id)arg1;

@end

