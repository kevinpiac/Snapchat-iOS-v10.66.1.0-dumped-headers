//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface SCChunkCameraLensItem : NSObject <NSCoding>
{
    NSString *_scancodeId;
    NSNumber *_scancodeVersion;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJsonDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *scancodeId; // @synthesize scancodeId=_scancodeId;
@property(readonly, copy, nonatomic) NSNumber *scancodeVersion; // @synthesize scancodeVersion=_scancodeVersion;

@end

