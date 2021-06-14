# Get Next Line
fd에서 한 줄을 읽는 것은 너무 지루합니다.

요약 :이 프로젝트의 목적은 파일 설명자에서 읽은 줄 바꿈으로 끝나는 줄을 반환하는 함수를 코딩하는 것입니다.

## Chapter I

### Goals

이 프로젝트를 사용하면 컬렉션에 매우 편리한 기능을 추가 할 수있을뿐만 아니라 C 프로그래밍에서 매우 흥미로운 새로운 개념 인 정적 변수를 배울 수 있습니다.

## Chapter II

### Common Instructions

- 이 프로젝트는 Norm에 따라 작성되어야합니다. 보너스 파일 / 기능이있는 경우 norm 검사에 포함되며 내부에 norm 오류가 있으면 0을 받게됩니다.
- 정의되지 않은 동작을 제외하고 기능이 예기치 않게 종료되어서는 안됩니다 (세그먼트 오류, 버스 오류, 이중 해제 등). 이 경우 프로젝트는 작동하지 않는 것으로 간주되며 평가 중에 0을 받게됩니다.
- 모든 힙 할당 메모리 공간은 필요한 경우 적절하게 해제되어야합니다. 누출은 용납되지 않습니다.
- 주제에 필요한 경우 `-Wall`, `-Wextra` 및 `-Werror` 플래그를 사용하여 소스 파일을 필요한 출력으로 컴파일하는 Makefile을 제출해야하며 Makefile은 다시 링크하지 않아야합니다.
- Makefile은 최소한 `$(NAME)`, `all`, `clean`, `fclean` 및 `re`규칙을 포함해야합니다.
- 프로젝트에 보너스를 적용하려면 Makefile에 `bonus `규칙을 포함해야합니다. 그러면 프로젝트의 주요 부분에서 금지 된 모든 다양한 헤더, 라이브러리 또는 기능이 추가됩니다. 보너스는 다른 파일 `_bonus. {c/h}`에 있어야합니다. 필수 및 보너스 파트 평가는 별도로 수행됩니다.
- 프로젝트에서 libft를 사용할 수있는 경우 소스 및 관련 Makefile을 관련 Makefile과 함께 libft 폴더에 복사해야합니다. 프로젝트의 Makefile은 Makefile을 사용하여 라이브러리를 컴파일 한 다음 프로젝트를 컴파일해야합니다.
- 이 작업을 제출할 필요가 없고 채점되지 않더라도 프로젝트에 대한 테스트 프로그램을 만드는 것이 좋습니다. 작업과 동료의 작업을 쉽게 테스트 할 수있는 기회를 제공합니다. 이러한 테스트는 수비 중에 특히 유용합니다. 실제로 수비 중에는 테스트 및 / 또는 평가중인 동료의 테스트를 자유롭게 사용할 수 있습니다.
- 할당 된 git 저장소에 작업을 제출합니다. git 저장소의 작업 만 등급이 지정됩니다. Deepthought가 작업 등급을 지정하는 경우 동료 평가 후에 수행됩니다. Deepthought의 채점 중 작업 섹션에서 오류가 발생하면 평가가 중지됩니다.

## Chapter III

### Mandatory part - Get_next_line

| Function name    | get_next_line                                                |
| ---------------- | ------------------------------------------------------------ |
| Prototype        | `int get_next_line(int fd, char **line);`                    |
| Turn in files    | `get_next_line.c`, `get_next_line_utils.c`, `get_next_line.h` |
| Parameters       | #1. file descriptor for reading<br />#2. The value of what has been read |
| Return value     | 1: A line has been read<br />0: EOF has been reached<br />-1: An error happened |
| External functs. | `read`, `malloc`, `free`                                     |
| Descriptions     | Write a function which returns a line read from a file descriptor, without the newline. |

- 루프에서 get_next_line 함수를 호출하면 EOF까지 한 번에 한 줄씩 파일 설명자에서 사용할 수있는 텍스트를 읽을 수 있습니다.
- 함수가 파일에서 읽을 때와 표준 입력에서 읽을 때 제대로 작동하는지 확인하십시오.
- 이 프로젝트에는 libft가 허용되지 않습니다. `get_next_line`이 작동하는 데 필요한 함수가 포함 된 `get_next_line_utils.c` 파일을 추가해야합니다.
- 프로그램은 `-D BUFFER_SIZE = xx` 플래그로 컴파일해야합니다. `get_next_line`에서 읽기 호출을위한 버퍼 크기로 사용됩니다. 이 값은 평가자와 moulinette에 의해 수정됩니다.
- 컴파일은 다음과 같이 수행됩니다. `gcc -Wall -Wextra -Werror -D BUFFER_SIZE = 32 get_next_line.c get_next_line_utils.c`
- 읽기는 컴파일 중에 정의 된 `BUFFER_SIZE`를 사용하여 파일 또는 stdin에서 읽어야합니다.
- 헤더 파일 `get_next_line.h`에는 최소한 `get_next_line` 함수의 프로토 타입이 있어야합니다.

> `BUFFER_SIZE` 값이 9999이면 함수가 계속 작동합니까? 그리고 `BUFFER_SIZE` 값이 1이면? 그리고 10000000이면? 그 이유를 아십니까?

> get_next_line이 호출 될 때마다 가능한 한 적게 읽어야합니다. 개행을 만나면 현재 행을 반환해야합니다. 전체 파일을 읽지 말고 각 행을 처리하십시오.

> 테스트없이 프로젝트를 제출하지 마십시오. 실행할 많은 테스트가 있으며 기지를 덮습니다. 파일, 리디렉션, 표준 입력에서 읽어보십시오. 표준 출력에 개행을 보낼 때 프로그램이 어떻게 작동합니까? 그리고 CTRL-D?

- 두 호출 사이에 첫 번째 fd에서 EOF에 도달하기 전에 동일한 파일 설명자가 다른 파일로 전환되면 `get_next_line`이 정의되지 않은 동작을한다고 간주합니다.
- `lseek`는 허용되는 함수가 아닙니다. 파일 읽기는 한 번만 수행해야합니다.
- 마지막으로 이진 파일에서 읽을 때 `get_next_line`에 정의되지 않은 동작이 있다고 생각합니다. 그러나 원하는 경우 이 동작을 일관되게 만들 수 있습니다.
- 전역 변수는 금지됩니다.

> A good start would be to know what a static variable is: : https://en.wikipedia.org/wiki/Static_variable

## Chapter IV

### Bonus part

get_next_line 프로젝트는 간단하고 보너스를위한 여지를 거의 남기지 않습니다. 그러나 저는 여러분이 많은 상상력을 가지고 있다고 확신합니다. 필수 부분을 완벽하게 달성했다면 반드시이 보너스 부분을 완료하여 더 나아가십시오. 반복합니다. 필수 부분이 완벽하지 않으면 보너스는 고려되지 않습니다.
이 부분에 대해 _bonus를 사용하여 3 개의 초기 파일을 모두 제출합니다.

- 단일 정적 변수로 `get_next_line` 성공.
- `get_next_line`을 사용하여 여러 파일 디스크립터를 관리 할 수 있습니다. 예를 들어, 파일 디스크립터 3, 4 및 5를 읽기 위해 액세스 할 수있는 경우 각 디스크립터에서 읽기 스레드를 잃지 않고 get_next_line을 3에 한 번, 4에 한 번, 3에 다시 한 번, 5에 한 번 등을 호출 할 수 있습니다. .
