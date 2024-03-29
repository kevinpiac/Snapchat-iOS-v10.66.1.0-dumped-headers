//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesLookupTable-Protocol.h"

@class NSArray, NSData, NSString;

@interface SCSpectaclesLookupTable : NSObject <SCSpectaclesLookupTable>
{
    unsigned long long _camera;
    unsigned long long _contentType;
    double _fieldOfView;
    NSData *_data;
    NSArray *_alignment;
    struct CGSize _size;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *alignment; // @synthesize alignment=_alignment;
@property(readonly, nonatomic) unsigned long long camera; // @synthesize camera=_camera;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, nonatomic) double fieldOfView; // @synthesize fieldOfView=_fieldOfView;
@property(readonly) unsigned long long hash;
- (id)initWithCamera:(unsigned long long)arg1 contentType:(unsigned long long)arg2 fieldOfView:(double)arg3 data:(id)arg4 alignment:(id)arg5 size:(struct CGSize)arg6;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSize:(struct CGSize)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

