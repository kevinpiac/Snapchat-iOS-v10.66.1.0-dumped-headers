//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FCFasterCoder <NSObject>
- (void)encode3DTransform:(struct CATransform3D)arg1;
- (void)encodeAffineTransform:(struct CGAffineTransform)arg1;
- (void)encodeBool:(_Bool)arg1;
- (void)encodeCMTime:(CDStruct_1b6d18a9)arg1;
- (void)encodeCMTimeMapping:(CDStruct_3800d160)arg1;
- (void)encodeCMTimeRange:(CDStruct_e83c9415)arg1;
- (void)encodeFloat32:(float)arg1;
- (void)encodeFloat64:(double)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodePoint:(struct CGPoint)arg1;
- (void)encodeRange:(struct _NSRange)arg1;
- (void)encodeRect:(struct CGRect)arg1;
- (void)encodeSInt16:(short)arg1;
- (void)encodeSInt32:(int)arg1;
- (void)encodeSInt64:(long long)arg1;
- (void)encodeSInt8:(BOOL)arg1;
- (void)encodeSize:(struct CGSize)arg1;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)encodeUInt16:(unsigned short)arg1;
- (void)encodeUInt32:(unsigned int)arg1;
- (void)encodeUInt64:(unsigned long long)arg1;
- (void)encodeUInt8:(unsigned char)arg1;
- (void)encodeVector:(struct CGVector)arg1;
@end
