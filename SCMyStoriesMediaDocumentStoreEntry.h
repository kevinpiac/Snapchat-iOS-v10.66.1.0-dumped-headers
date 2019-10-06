//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSDate;

@interface SCMyStoriesMediaDocumentStoreEntry : NSObject <NSCopying, NSCoding>
{
    NSDate *_dateAdded;
    NSData *_media;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateAdded:(id)arg1 media:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSData *media; // @synthesize media=_media;

@end
