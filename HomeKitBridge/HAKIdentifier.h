//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;




@class NSData;

@interface HAKIdentifier : NSObject <NSCopying, NSCoding>
{
    NSData *_data;
}

+ (id)identifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)identifierString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBytes:(unsigned char [6])arg1;
- (id)initWithIdentifierString:(id)arg1;
- (id)init;

@end
