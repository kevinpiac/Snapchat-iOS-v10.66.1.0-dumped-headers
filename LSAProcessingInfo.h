//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSASpectaclesInfo;

@interface LSAProcessingInfo : NSObject
{
    _Bool _normalizeOutputOrientation;
    _Bool _isFromARKit;
    _Bool _modifySource;
    _Bool _requiresYUVOutput;
    unsigned long long _inputSource;
    long long _inputPixelBufferOrientation;
    long long _inputTextureOrientation;
    long long _outputTextureOrientation;
    double _fieldOfView;
    LSASpectaclesInfo *_spectaclesInfo;
    CDStruct_1b6d18a9 _timestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double fieldOfView; // @synthesize fieldOfView=_fieldOfView;
- (id)initWithInputSource:(unsigned long long)arg1 pixelBufferOrientation:(long long)arg2 inputTextureOrientation:(long long)arg3 outputTextureOrientation:(long long)arg4 timestamp:(CDStruct_1b6d18a9)arg5 fieldOfView:(double)arg6 normalizeOutputOrientation:(_Bool)arg7 isFromARKit:(_Bool)arg8 modifySource:(_Bool)arg9 requiresYUVOutput:(_Bool)arg10 spectaclesInfo:(id)arg11;
- (id)initWithInputSource:(unsigned long long)arg1 pixelBufferOrientation:(long long)arg2 timestamp:(CDStruct_1b6d18a9)arg3 fieldOfView:(double)arg4 normalizeOutputOrientation:(_Bool)arg5 isFromARKit:(_Bool)arg6 modifySource:(_Bool)arg7;
@property(readonly, nonatomic) long long inputPixelBufferOrientation; // @synthesize inputPixelBufferOrientation=_inputPixelBufferOrientation;
@property(readonly, nonatomic) unsigned long long inputSource; // @synthesize inputSource=_inputSource;
@property(readonly, nonatomic) long long inputTextureOrientation; // @synthesize inputTextureOrientation=_inputTextureOrientation;
@property(readonly, nonatomic) _Bool isFromARKit; // @synthesize isFromARKit=_isFromARKit;
@property(readonly, nonatomic) _Bool modifySource; // @synthesize modifySource=_modifySource;
@property(readonly, nonatomic) _Bool normalizeOutputOrientation; // @synthesize normalizeOutputOrientation=_normalizeOutputOrientation;
@property(readonly, nonatomic) long long outputTextureOrientation; // @synthesize outputTextureOrientation=_outputTextureOrientation;
@property(readonly, nonatomic) _Bool requiresYUVOutput; // @synthesize requiresYUVOutput=_requiresYUVOutput;
@property(readonly, nonatomic) LSASpectaclesInfo *spectaclesInfo; // @synthesize spectaclesInfo=_spectaclesInfo;
@property(readonly, nonatomic) CDStruct_1b6d18a9 timestamp; // @synthesize timestamp=_timestamp;

@end

