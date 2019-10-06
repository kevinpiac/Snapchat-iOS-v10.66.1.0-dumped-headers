//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCMP4Box : NSObject
{
    NSString *_type;
}

+ (_Bool)isCompositionBox:(id)arg1;
+ (id)mp4BoxFromFileHandle:(id)arg1 atOffset:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)readHeaderSize:(unsigned long long *)arg1 type:(id *)arg2 fromFile:(id)arg3 error:(id *)arg4;
+ (void)writeHeaderOfSize:(unsigned long long)arg1 type:(id)arg2 toFile:(id)arg3;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1;
- (unsigned long long)size;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)writeToFile:(id)arg1;

@end
