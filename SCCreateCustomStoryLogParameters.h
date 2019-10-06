//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCreateCustomStoryLogParameters : NSObject <NSCopying>
{
    _Bool _isSuccess;
    _Bool _hasDisplayname;
    _Bool _hasAutoSave;
    unsigned long long _numPosters;
    unsigned long long _numViewers;
    NSString *_publicationId;
    NSString *_mischiefId;
    long long _customStoryType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long customStoryType; // @synthesize customStoryType=_customStoryType;
@property(readonly, nonatomic) _Bool hasAutoSave; // @synthesize hasAutoSave=_hasAutoSave;
@property(readonly, nonatomic) _Bool hasDisplayname; // @synthesize hasDisplayname=_hasDisplayname;
- (unsigned long long)hash;
- (id)initWithIsSuccess:(_Bool)arg1 hasDisplayname:(_Bool)arg2 hasAutoSave:(_Bool)arg3 numPosters:(unsigned long long)arg4 numViewers:(unsigned long long)arg5 publicationId:(id)arg6 mischiefId:(id)arg7 customStoryType:(long long)arg8;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(readonly, copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(readonly, nonatomic) unsigned long long numPosters; // @synthesize numPosters=_numPosters;
@property(readonly, nonatomic) unsigned long long numViewers; // @synthesize numViewers=_numViewers;
@property(readonly, copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;

@end

