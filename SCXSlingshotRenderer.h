//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCXRenderer-Protocol.h"

@class NSString;

@interface SCXSlingshotRenderer : NSObject <SCXRenderer>
{
    _Bool _readyToRender;
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragShader;
    unsigned int _vao;
    unsigned int _vbo;
    unsigned int _positionAttribute;
    unsigned int _uvAttribute;
    unsigned int _weightAttribute;
    unsigned int _transformUniformLocation;
    unsigned int _stretchUniformLocation;
    unsigned int _timeUniformLocation;
    unsigned int _vertexCount;
}

- (void)complete;
- (id)init;
- (void)prepare;
- (void)render:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
