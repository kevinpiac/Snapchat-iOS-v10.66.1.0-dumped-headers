//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface SCImageProcessProgram : NSObject
{
    _Bool _compiled;
    _Bool _linked;
    NSString *_vshString;
    NSString *_fshString;
    unsigned int _vShader;
    unsigned int _fShader;
    _Bool _readyToUse;
    unsigned int _program;
    NSError *_error;
}

- (void).cxx_destruct;
- (_Bool)compileWithError:(id *)arg1;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (_Bool)linkWithError:(id *)arg1;
@property(readonly, nonatomic) unsigned int program; // @synthesize program=_program;
@property(readonly, nonatomic) _Bool readyToUse; // @synthesize readyToUse=_readyToUse;
- (_Bool)use;

@end

