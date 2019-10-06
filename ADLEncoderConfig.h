//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADLEncoderConfig : NSObject
{
    int _initialBitrateKbps;
    int _initialFrameRate;
    int _width;
    int _height;
    NSString *_mimeType;
}

+ (id)EncoderConfigWithMimeType:(id)arg1 initialBitrateKbps:(int)arg2 initialFrameRate:(int)arg3 width:(int)arg4 height:(int)arg5;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
- (id)initWithMimeType:(id)arg1 initialBitrateKbps:(int)arg2 initialFrameRate:(int)arg3 width:(int)arg4 height:(int)arg5;
@property(readonly, nonatomic) int initialBitrateKbps; // @synthesize initialBitrateKbps=_initialBitrateKbps;
@property(readonly, nonatomic) int initialFrameRate; // @synthesize initialFrameRate=_initialFrameRate;
@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, nonatomic) int width; // @synthesize width=_width;

@end
