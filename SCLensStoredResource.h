//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensStoredResource-Protocol.h"

@class NSString, SCLensResource;

@interface SCLensStoredResource : NSObject <SCLensStoredResource>
{
    NSString *_contentId;
    NSString *_contentPath;
    SCLensResource *_lensResource;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(readonly, copy, nonatomic) NSString *contentPath; // @synthesize contentPath=_contentPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentId:(id)arg1 contentPath:(id)arg2 lensResource:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCLensResource *lensResource; // @synthesize lensResource=_lensResource;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
