#import <Foundation/Foundation.h>

@interface RNCachingURLProtocol : NSURLProtocol

+ (NSSet *)supportedSchemes;
+ (void)setSupportedSchemes:(NSSet *)supportedSchemes;

- (NSString *)cachePathForRequest:(NSURLRequest *)aRequest;
- (BOOL) useCache;

@end
